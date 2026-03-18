/*
 * XREFs of ListTableIteratorNext @ 0x1C0130BDC
 * Callers:
 *     RIMCmActiveContactsBegin @ 0x1C012E594 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x1C012E6FC (RIMCmActiveContactsNext.c)
 * Callees:
 *     ListTableEnd @ 0x1C0130B8C (ListTableEnd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ListTableIteratorNext(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r10
  unsigned int v10; // r9d
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // xmm1_8
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  if ( !*a2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *a2;
  }
  if ( *((_DWORD *)a2 + 2) >= *(_DWORD *)(v3 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = *(_QWORD **)a2[2];
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v7 = *(_QWORD *)a1;
  LODWORD(v8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v6;
  v9 = *(_QWORD *)v7;
  if ( v6 == (_QWORD *)(*(_QWORD *)v7 + 16LL * (unsigned int)v8) )
  {
    v10 = *(_DWORD *)(v7 + 8);
    while ( 1 )
    {
      v8 = (unsigned int)(v8 + 1);
      *(_DWORD *)(a1 + 8) = v8;
      if ( (unsigned int)v8 >= v10 )
        break;
      v6 = (_QWORD *)(v9 + 16LL * (unsigned int)v8);
      v11 = (_QWORD *)*v6;
      *(_QWORD *)(a1 + 16) = *v6;
      if ( v11 != v6 )
        return a1;
    }
    if ( (_DWORD)v8 != v10 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v8, v7);
      v7 = *(_QWORD *)a1;
    }
    v12 = ListTableEnd((__int64)v15, v7, v7);
    v13 = *(_QWORD *)(v12 + 16);
    *(_OWORD *)a1 = *(_OWORD *)v12;
    *(_QWORD *)(a1 + 16) = v13;
  }
  return a1;
}
