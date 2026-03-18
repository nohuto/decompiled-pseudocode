/*
 * XREFs of NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0004B60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C000C384 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C0014CA0 (Win32AllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall NtDCompositionTelemetryTouchInteractionBegin(unsigned int a1, size_t Size, char *Src)
{
  int v6; // ebx
  struct DirectComposition::CApplicationChannel *v7; // rdi
  __int64 v8; // rax
  __int64 *v9; // rdx
  struct DirectComposition::CApplicationChannel *v11; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v12[40]; // [rsp+30h] [rbp-58h] BYREF

  v6 = 0;
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( !Src || Size != 40 )
    v6 = -1073741811;
  if ( v6 >= 0 )
  {
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v12, Src, Size);
    v6 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v11);
    v7 = v11;
    if ( v6 >= 0 )
    {
      v6 = 0;
      v8 = Win32AllocPoolWithQuota(56LL, 1869890372LL);
      if ( !v8 )
        v6 = -1073741801;
      if ( v6 >= 0 )
      {
        *(_OWORD *)(v8 + 16) = *(_OWORD *)v12;
        *(_OWORD *)(v8 + 32) = *(_OWORD *)&v12[16];
        *(_QWORD *)(v8 + 48) = *(_QWORD *)&v12[32];
        v9 = (__int64 *)*((_QWORD *)v7 + 67);
        if ( (struct DirectComposition::CApplicationChannel *)*v9 != (struct DirectComposition::CApplicationChannel *)((char *)v7 + 528) )
          __fastfail(3u);
        *(_QWORD *)v8 = (char *)v7 + 528;
        *(_QWORD *)(v8 + 8) = v9;
        *v9 = v8;
        *((_QWORD *)v7 + 67) = v8;
      }
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v7)(v7);
    }
  }
  return (unsigned int)v6;
}
