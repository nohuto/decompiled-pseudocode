/*
 * XREFs of CrmStateMonitorWNFCallback @ 0x1800476B0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180032410 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorStateSizeGet @ 0x180032AB8 (CrmStateMonitorStateSizeGet.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorWNFCallback(__int64 a1, __int64 a2, __int64 a3, int *a4, __int64 a5, size_t Size)
{
  const void *v7; // rdx
  size_t v8; // rdi
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h]

  v8 = (unsigned int)CrmStateMonitorStateSizeGet(*a4);
  v10 = 1LL;
  v11 = 0;
  if ( (unsigned int)Size <= 8 )
    memcpy_0((char *)&v10 + 4, v7, (unsigned int)Size);
  CrmStateMonitorStateSet((void **)a4, &v10, v8, 0);
  return 0LL;
}
