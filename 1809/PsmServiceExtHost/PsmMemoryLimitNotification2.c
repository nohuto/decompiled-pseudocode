/*
 * XREFs of PsmMemoryLimitNotification2 @ 0x180037FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18001C590 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall PsmMemoryLimitNotification2(
        void *Src,
        int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  DWORD v5; // ebx
  int v10; // ebx
  ULONG v11; // eax
  DWORD v12; // ebx
  _BYTE v13[80]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-B8h] BYREF

  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
    {
      v10 = 0;
      goto LABEL_9;
    }
    v5 = HampLockTrackerId;
  }
  memset_0(TlsValue, 0, 0x88uLL);
  if ( v5 != -1 )
  {
    if ( TlsGetValue(v5) )
      __int2c();
    TlsSetValue(v5, TlsValue);
  }
  v10 = 1;
LABEL_9:
  memset_0(v13, 0, 0x44uLL);
  v11 = RtlLengthSid(Src);
  memcpy_0(v13, Src, v11);
  ModernResourceEnforcer::MemoryLimitNotification(
    *((ModernResourceEnforcer **)RmSvcGlobals + 5),
    (union _RM_SID *)v13,
    a2,
    a3,
    a4,
    a5);
  if ( v10 )
  {
    v12 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v12, 0LL);
    }
  }
}
