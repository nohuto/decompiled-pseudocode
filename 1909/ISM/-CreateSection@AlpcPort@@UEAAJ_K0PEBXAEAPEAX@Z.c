/*
 * XREFs of ?CreateSection@AlpcPort@@UEAAJ_K0PEBXAEAPEAX@Z @ 0x1800D4DB0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3D8C (-FailFast_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z @ 0x1800D4A70 (-AddSectionListEntry@SipcPort@@IEAAXPEAUSectionListEntry@1@@Z.c)
 *     ?ComputeFromData@SipcSectionId@@QEAAJ_KPEBX@Z @ 0x1800D4C40 (-ComputeFromData@SipcSectionId@@QEAAJ_KPEBX@Z.c)
 *     ?FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800D558C (-FillSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z @ 0x1800D56B0 (-FindSectionListEntry@SipcPort@@IEAAPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z.c)
 *     ?InitializeSectionMemory@SipcPort@@KAXPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z @ 0x1800D5FFC (-InitializeSectionMemory@SipcPort@@KAXPEAUSectionListEntry@1@AEBUSipcSectionId@@@Z.c)
 *     ?PopFront@?$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ @ 0x1800D6478 (-PopFront@-$NtList@UAlpcSectionListEntry@AlpcPort@@@@QEAAPEAUAlpcSectionListEntry@AlpcPort@@XZ.c)
 *     ?ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z @ 0x1800D659C (-ProtectUnusedSectionMemory@SipcPort@@KAJPEAUSectionListEntry@1@@Z.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x1800D6A6C (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 */

int __fastcall AlpcPort::CreateSection(AlpcPort *this, __int64 a2, ULONG a3, UCHAR *a4, void **a5)
{
  int result; // eax
  int v10; // eax
  bool v11; // sf
  int v12; // eax
  int v13; // edx
  unsigned __int64 v14; // rcx
  int SectionView; // ebx
  __int64 v16; // rbx
  DWORD CurrentThreadId; // eax
  int v18; // eax
  _BYTE v19[8]; // [rsp+30h] [rbp-31h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v21; // [rsp+48h] [rbp-19h] BYREF
  UCHAR pbBuffer[32]; // [rsp+50h] [rbp-11h] BYREF

  *a5 = 0LL;
  result = AlpcPort::FillSectionListEntryPool(this, 1uLL);
  if ( result >= 0 )
  {
    memset_0(pbBuffer, 0, sizeof(pbBuffer));
    if ( a4 )
    {
      result = SipcSectionId::ComputeFromData(pbBuffer, a3, a4);
      if ( result < 0 )
        return result;
      if ( SipcPort::FindSectionListEntry(this, (const struct SipcSectionId *)pbBuffer) )
        return -2147024809;
LABEL_11:
      memset_0(v19, 0, 0x20uLL);
      v12 = NtAlpcCreatePortSection(*((_QWORD *)this + 7), 0LL, 0LL, ((a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 40, v20, &v21);
      if ( v12 >= 0 )
      {
        SectionView = NtAlpcCreateSectionView(*((_QWORD *)this + 7), 0LL, v19);
        if ( SectionView >= 0 )
        {
          v16 = NtList<AlpcPort::AlpcSectionListEntry>::PopFront((char *)this + 64);
          *(_QWORD *)(v16 + 24) = v20[1];
          *(_QWORD *)(v16 + 32) = v21;
          *(_QWORD *)(v16 + 40) = a2;
          *(_DWORD *)(v16 + 48) = GetCurrentProcessId();
          CurrentThreadId = GetCurrentThreadId();
          *(_BYTE *)(v16 + 58) = 1;
          *(_DWORD *)(v16 + 52) = CurrentThreadId;
          *(_QWORD *)(v16 + 72) = v20[0];
          SipcPort::InitializeSectionMemory(
            (struct SipcPort::SectionListEntry *)v16,
            (const struct SipcSectionId *)pbBuffer);
          SipcPort::ProtectUnusedSectionMemory((struct SipcPort::SectionListEntry *)v16);
          SipcPort::AddSectionListEntry(this, (struct SipcPort::SectionListEntry *)v16);
          *a5 = *(void **)(v16 + 24);
          return 0;
        }
        v18 = NtAlpcDeletePortSection(*((_QWORD *)this + 7), 0LL, v20[0]);
        if ( v18 < 0 )
        {
          wil::details::in1diag0::FailFast_Hr((wil::details::in1diag0 *)(unsigned int)v18);
          __debugbreak();
        }
        v14 = (unsigned int)SectionView;
      }
      else
      {
        v14 = (unsigned int)v12;
      }
      return wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)v14, v13);
    }
    else
    {
      while ( 1 )
      {
        v10 = BCryptGenRandom(0LL, pbBuffer, 0x20u, 2u);
        if ( v10 < 0 )
        {
          result = RtlNtStatusToDosError(v10);
          v11 = result < 0;
          if ( result > 0 )
          {
            result = (unsigned __int16)result | 0x80070000;
            v11 = result < 0;
          }
          if ( v11 )
            break;
        }
        if ( !SipcPort::FindSectionListEntry(this, (const struct SipcSectionId *)pbBuffer) )
          goto LABEL_11;
      }
    }
  }
  return result;
}
