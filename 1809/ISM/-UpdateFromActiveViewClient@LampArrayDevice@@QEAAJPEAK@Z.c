/*
 * XREFs of ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x180074688
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800710A4 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180074890 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z @ 0x18007A830 (-SendVendorReport@HidLampArrayDevice@@QEAAJEEPEBE@Z.c)
 *     ?ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z @ 0x18007AAC4 (-ReceiveVendorReport@HidLampArrayDevice@@QEAAJEPEAE0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LampArrayDevice::UpdateFromActiveViewClient(LampArrayDevice *this, unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  struct LampArrayDevice::ViewClientListEntry *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  struct LampArrayDevice::ViewClientListEntry **v7; // r9
  struct LampArrayDevice::ViewClientListEntry **v8; // r8
  struct LampArrayDevice::ViewClientListEntry *i; // rax
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // eax
  LARGE_INTEGER *v13; // r14
  LONGLONG v14; // rax
  LONGLONG v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v19; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v21; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 104);
  *a2 = -1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  v5 = (struct LampArrayDevice::ViewClientListEntry *)*((_QWORD *)this + 12);
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v7 = (struct LampArrayDevice::ViewClientListEntry **)((char *)this + 32);
  v8 = (struct LampArrayDevice::ViewClientListEntry **)*((_QWORD *)this + 4);
  if ( v8 != (struct LampArrayDevice::ViewClientListEntry **)((char *)this + 32) )
  {
    while ( !*((_DWORD *)v8[4] + 158) )
    {
      v8 = (struct LampArrayDevice::ViewClientListEntry **)*v8;
      if ( v8 == v7 )
        goto LABEL_11;
    }
    for ( i = *v7;
          i != (struct LampArrayDevice::ViewClientListEntry *)v7;
          i = *(struct LampArrayDevice::ViewClientListEntry **)i )
    {
      if ( *((_DWORD *)i + 6) == *((_DWORD *)v8[4] + 158) )
      {
        v5 = i;
        break;
      }
    }
  }
LABEL_11:
  if ( v5 && *(_DWORD *)(*((_QWORD *)v5 + 4) + 556LL) == 1 )
  {
    v10 = *((_QWORD *)v5 + 4);
    if ( *(_DWORD *)(v10 + 552) == 1 )
    {
      v12 = HidLampArrayDevice::SendVendorReport(
              *((HidLampArrayDevice **)this + 3),
              *(_BYTE *)(v10 + 560),
              *(_BYTE *)(v10 + 561),
              (const unsigned __int8 *)(v10 + 562));
    }
    else
    {
      if ( *(_DWORD *)(v10 + 552) != 2 )
      {
        v11 = -2147418113;
LABEL_19:
        *(_DWORD *)(*((_QWORD *)v5 + 4) + 628LL) = v11;
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v5 + 4) + 556LL), 2);
        (*(void (__fastcall **)(__int64))(**((_QWORD **)v5 + 2) + 48LL))(*((_QWORD *)v5 + 2));
        goto LABEL_20;
      }
      v12 = HidLampArrayDevice::ReceiveVendorReport(
              *((HidLampArrayDevice **)this + 3),
              *(_BYTE *)(v10 + 560),
              (unsigned __int8 *)(v10 + 561),
              (unsigned __int8 *)(v10 + 562));
    }
    v11 = v12;
    goto LABEL_19;
  }
LABEL_20:
  QueryPerformanceCounter(&PerformanceCount);
  v13 = (LARGE_INTEGER *)((char *)this + 192);
  v14 = PerformanceCount.QuadPart - *((_QWORD *)this + 24);
  v15 = *((_QWORD *)this + 25);
  if ( v14 < v15 )
  {
    v19 = 1000 * (v15 - v14) / *((_QWORD *)this + 23);
    if ( v19 > 0xFFFFFFFFLL )
      LODWORD(v19) = -1;
  }
  else
  {
    v21 = 0;
    v16 = LampArrayDevice::ProcessLampState(this, v5, &v21);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)v16);
      if ( v6 )
        LeaveCriticalSection(v6);
      if ( v2 )
        LeaveCriticalSection(v2);
      return v17;
    }
    if ( v21 )
      QueryPerformanceCounter(v13);
    LODWORD(v19) = 0;
  }
  *a2 = v19;
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
