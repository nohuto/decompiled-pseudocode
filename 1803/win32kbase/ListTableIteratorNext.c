/*
 * XREFs of ListTableIteratorNext @ 0x1C005876C
 * Callers:
 *     RIMCmActiveContactsBegin @ 0x1C00586E4 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 * Callees:
 *     ListTableEnd @ 0x1C0058870 (ListTableEnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 **__fastcall ListTableIteratorNext(__int64 **a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned int v9; // r9d
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 *v12; // xmm1_8
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  if ( !*a2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v2 = *a2;
  }
  if ( *((_DWORD *)a2 + 2) >= *(_DWORD *)(v2 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v5 = *(__int64 **)a2[2];
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v6 = *a1;
  LODWORD(v7) = *((_DWORD *)a1 + 2);
  a1[2] = v5;
  v8 = *v6;
  if ( v5 == (__int64 *)(*v6 + 16LL * (unsigned int)v7) )
  {
    v9 = *((_DWORD *)v6 + 2);
    while ( 1 )
    {
      v7 = (unsigned int)(v7 + 1);
      *((_DWORD *)a1 + 2) = v7;
      if ( (unsigned int)v7 >= v9 )
        break;
      v5 = (__int64 *)(v8 + 16LL * (unsigned int)v7);
      v10 = (__int64 *)*v5;
      a1[2] = (__int64 *)*v5;
      if ( v10 != v5 )
        return a1;
    }
    if ( (_DWORD)v7 != v9 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v7);
      v6 = *a1;
    }
    v11 = ListTableEnd(v14, v6);
    v12 = *(__int64 **)(v11 + 16);
    *(_OWORD *)a1 = *(_OWORD *)v11;
    a1[2] = v12;
  }
  return a1;
}
