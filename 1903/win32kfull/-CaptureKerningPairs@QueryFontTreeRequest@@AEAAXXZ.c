/*
 * XREFs of ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C0145594
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x1C00F05A0 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00F0774 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C00F0FB0 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall QueryFontTreeRequest::CaptureKerningPairs(QueryFontTreeRequest *this)
{
  _WORD *v2; // rdi
  unsigned int v3; // ebx
  ULONG64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 *v10; // rbx
  int v11; // eax
  char *v12; // rax

  v2 = (_WORD *)*((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = 0;
    Win32ProbeForRead(*((char **)this + 11), 6LL, 2);
    while ( 1 )
    {
      v5 = 3LL * v3;
      if ( !v2[3 * v3] && !v2[3 * v3 + 1] && !v2[3 * v3 + 2] )
        break;
      v6 = v3 + 1;
      if ( (unsigned int)v6 < v3 )
        return;
      ++v3;
      v7 = (unsigned __int64)&v2[3 * v6];
      if ( (v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v4 = MmUserProbeAddress;
      if ( v7 + 6 > MmUserProbeAddress || v7 + 6 < v7 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v8 = v3 + 1;
    if ( (unsigned int)v8 >= v3 )
    {
      v9 = 6 * v8;
      if ( (unsigned __int64)(6 * v8) <= 0xFFFFFFFF )
      {
        v10 = (__int64 *)*((_QWORD *)this + 8);
        v11 = (**(__int64 (__fastcall ***)(QueryFontTreeRequest *, ULONG64, const ULONG64))this)(
                this,
                v4,
                MmUserProbeAddress);
        v12 = UmfdAllocation::ObtainKernelmodeAllocation(
                v11,
                *v10,
                v2,
                v9,
                0LL,
                (unsigned __int8 (__fastcall *)(void *, __int64, _QWORD))UmfdAllocation::TryBufferHasSameContent);
        if ( v12 )
        {
          *(_DWORD *)&v12[2 * v5] = 0;
          *(_WORD *)&v12[2 * v5 + 4] = 0;
          *((_QWORD *)this + 9) = v12;
        }
      }
    }
  }
}
