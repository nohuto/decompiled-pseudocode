/*
 * XREFs of ndisQueryEnableWakeUp @ 0x1C0075DB8
 * Callers:
 *     ndisOidPreEnableWakeUp @ 0x1C0074240 (ndisOidPreEnableWakeUp.c)
 * Callees:
 *     ndisQueryOpenEnableWakeUp @ 0x1C0075E24 (ndisQueryOpenEnableWakeUp.c)
 */

char __fastcall ndisQueryEnableWakeUp(__int64 *a1)
{
  char v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax

  v2 = 0;
  v3 = a1[3];
  v4 = a1[4];
  v5 = *a1;
  if ( v3 )
  {
    *((_DWORD *)a1 + 10) = ndisQueryOpenEnableWakeUp(v3, v4);
    return 1;
  }
  if ( v5 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v4 + 48) >= 4u )
    {
      **(_DWORD **)(v4 + 40) = *(_DWORD *)(v5 + 1292);
      *(_QWORD *)(v4 + 52) = 4LL;
    }
    else
    {
      *(_DWORD *)(v4 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    return 1;
  }
  return v2;
}
