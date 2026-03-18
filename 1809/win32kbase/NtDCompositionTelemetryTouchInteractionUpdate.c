/*
 * XREFs of NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0002B40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010378 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtDCompositionTelemetryTouchInteractionUpdate(unsigned int a1, size_t Size, char *Src)
{
  signed int v6; // ebx
  struct DirectComposition::CApplicationChannel *v7; // rdi
  __int64 v8; // rax
  __int64 *v9; // rdx
  struct DirectComposition::CApplicationChannel *v11; // [rsp+28h] [rbp-80h] BYREF
  _OWORD v12[4]; // [rsp+30h] [rbp-78h] BYREF

  v6 = 0;
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( !Src || Size != 64 )
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
      v8 = Win32AllocPoolWithQuota(80LL, 1869890372LL);
      v6 = v8 == 0 ? 0xC0000017 : 0;
      if ( v8 )
      {
        *(_OWORD *)(v8 + 16) = v12[0];
        *(_OWORD *)(v8 + 32) = v12[1];
        *(_OWORD *)(v8 + 48) = v12[2];
        *(_OWORD *)(v8 + 64) = v12[3];
        v9 = (__int64 *)*((_QWORD *)v7 + 69);
        if ( (struct DirectComposition::CApplicationChannel *)*v9 != (struct DirectComposition::CApplicationChannel *)((char *)v7 + 544) )
          __fastfail(3u);
        *(_QWORD *)v8 = (char *)v7 + 544;
        *(_QWORD *)(v8 + 8) = v9;
        *v9 = v8;
        *((_QWORD *)v7 + 69) = v8;
      }
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v7)(v7);
    }
  }
  return (unsigned int)v6;
}
