/*
 * XREFs of ?DxgkWnfStateChangeCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C0145F80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DxgkWnfStateChangeCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        unsigned int a3,
        unsigned int a4,
        const struct _WNF_TYPE_ID *a5,
        void *a6)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  struct DXGGLOBAL *v14; // rax
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-88h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2);
  DXGPUSHLOCK::AcquireShared((struct DXGGLOBAL *)((char *)Global + 1080));
  v13 = 0;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)a6 + 4) )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*((PRKPROCESS *)a6 + 3), &ApcState);
    v13 = (*((__int64 (__fastcall **)(struct _EX_WNF_SUBSCRIPTION *, const struct _WNF_STATE_NAME *, _QWORD, _QWORD, const struct _WNF_TYPE_ID *, void *))a6
           + 1))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6);
    KeUnstackDetachProcess(&ApcState);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)a6 + 4);
  }
  v14 = DXGGLOBAL::GetGlobal(v12, v11);
  ExReleasePushLockSharedEx((char *)v14 + 1080, 0LL);
  KeLeaveCriticalRegion();
  return v13;
}
