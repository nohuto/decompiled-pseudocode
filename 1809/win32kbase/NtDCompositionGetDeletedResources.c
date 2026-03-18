/*
 * XREFs of NtDCompositionGetDeletedResources @ 0x1C007D2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010378 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?GetTags@CDeletedNotificationList@DirectComposition@@QEAAXKPEA_KPEAK@Z @ 0x1C00802C4 (-GetTags@CDeletedNotificationList@DirectComposition@@QEAAXKPEA_KPEAK@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetDeletedResources(unsigned int a1, unsigned int a2, char *a3, unsigned int *a4)
{
  __int64 v6; // r15
  int v8; // ebx
  struct DirectComposition::CApplicationChannel *v9; // r14
  char *v10; // rdx
  unsigned int v12; // [rsp+20h] [rbp-98h] BYREF
  struct DirectComposition::CApplicationChannel *v13; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 Src[8]; // [rsp+30h] [rbp-88h] BYREF

  v6 = a2;
  v8 = 0;
  v13 = 0LL;
  memset(Src, 0, sizeof(Src));
  if ( (unsigned int)(v6 - 1) > 7 || !a3 || !a4 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v13);
    v9 = v13;
    if ( v8 >= 0 )
    {
      DirectComposition::CDeletedNotificationList::GetTags(
        (struct DirectComposition::CApplicationChannel *)((char *)v13 + 472),
        v6,
        Src,
        &v12);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v9)(v9);
      v10 = &a3[8 * v6];
      if ( (unsigned __int64)v10 > MmUserProbeAddress || v10 <= a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a3, Src, 8 * v6);
      if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v12;
    }
  }
  return (unsigned int)v8;
}
