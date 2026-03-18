/*
 * XREFs of ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002D4FC
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F9164 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C020CD00 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 * Callees:
 *     <none>
 */

DXGPROCESSDEVICEITERATIONLOCK *__fastcall DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK(
        DXGPROCESSDEVICEITERATIONLOCK *this,
        struct DXGPROCESS *a2)
{
  char *v2; // rbx

  *(_QWORD *)this = a2;
  v2 = (char *)a2 + 184;
  if ( !*((_BYTE *)a2 + 320) )
    v2 = (char *)a2 + 168;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  return this;
}
