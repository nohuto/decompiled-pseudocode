/*
 * XREFs of TtmiSessionTerminalListWorker @ 0x1408BC710
 * Callers:
 *     TtmpSessionWorker @ 0x1408BEE70 (TtmpSessionWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     TtmiEvacuateDevices @ 0x1408BB130 (TtmiEvacuateDevices.c)
 *     TtmpUpdateTerminalState @ 0x1408BD0A4 (TtmpUpdateTerminalState.c)
 *     TtmpWriteDisplayStateChangedEvent @ 0x1408BD244 (TtmpWriteDisplayStateChangedEvent.c)
 *     TtmiPurgeSessionPowerRequestEntries @ 0x1408BDDC0 (TtmiPurgeSessionPowerRequestEntries.c)
 *     TtmiUpdateActiveTerminalCount @ 0x1408BE218 (TtmiUpdateActiveTerminalCount.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x1408BE6F4 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmiLogTerminalCleanup @ 0x1408C37DC (TtmiLogTerminalCleanup.c)
 */

void __fastcall TtmiSessionTerminalListWorker(unsigned int *a1, char *a2, _BYTE *a3)
{
  unsigned int *v3; // r15
  unsigned int *v4; // rbx
  char v5; // bp
  char v9; // r10
  unsigned int *v10; // r14
  unsigned int *v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rdx
  void ***v14; // rax
  bool v15; // zf
  char v16; // dl
  char v17; // al
  _QWORD *v18; // rax
  void **v19; // rcx
  unsigned int v20; // eax
  unsigned int *i; // rcx
  __int64 v22; // rdx
  char v23; // [rsp+70h] [rbp+8h] BYREF
  char v24; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v25; // [rsp+80h] [rbp+18h]
  void ***v26; // [rsp+88h] [rbp+20h]

  v3 = a1 + 10;
  *a2 = 0;
  v4 = (unsigned int *)*((_QWORD *)a1 + 5);
  v5 = 0;
  *a3 = 0;
  if ( v4 != a1 + 10 )
  {
    v9 = 1;
    do
    {
      v10 = v4 + 9;
      v11 = v4;
      v12 = v4[9];
      if ( ((unsigned __int8)v12 & (unsigned __int8)v9) != 0 )
      {
        v13 = *a1;
        v14 = (void ***)(v4 + 2);
        v4 = (unsigned int *)*((_QWORD *)v4 + 1);
        v26 = v14;
        v25 = v11[7];
        TtmiLogTerminalCleanup(v11, v13, v25);
        if ( (*v10 & 0x10) != 0 )
        {
          v15 = (unsigned __int8)TtmiUpdateActiveTerminalCount(a1, 0LL, 26LL) == 0;
          v17 = v16 + 1;
          if ( !v15 )
            *a2 = v17;
        }
        else
        {
          v17 = 1;
        }
        if ( v11[8] )
          v5 = v17;
        if ( TtmiEvacuateDevices((__int64)a1, (__int64)v11) )
          *a3 = 1;
        v18 = *(_QWORD **)v11;
        if ( *(unsigned int **)(*(_QWORD *)v11 + 8LL) != v11 || (v19 = *v26, **v26 != v11) )
          __fastfail(3u);
        *v19 = v18;
        v18[1] = v19;
        *((_QWORD *)v11 + 2) = 0LL;
        TtmpDereferenceSessionMaybeLast(a1);
        _bittestandreset(*((signed __int32 **)a1 + 8), v25);
        v20 = *v10;
        *((_QWORD *)v11 + 2) = 0LL;
        v11[6] = 1417180244;
        *v10 = v20 & 0xFFFFFFFC | 2;
        ObfDereferenceObject(v11);
        v9 = 1;
      }
      else if ( (v12 & 4) != 0 )
      {
        *v10 = v12 & 0xFFFFFFFB;
        TtmpUpdateTerminalState(a1, v4, &v24, &v23);
        if ( v23 )
        {
          for ( i = (unsigned int *)*((_QWORD *)a1 + 12); i != a1 + 24; i = *(unsigned int **)i )
          {
            if ( i[149] == v4[7] )
              i[150] |= 0x40u;
          }
          TtmpWriteDisplayStateChangedEvent(a1, v4);
          v9 = 1;
          *a3 = 1;
        }
        else
        {
          v9 = 1;
        }
        if ( v24 )
        {
          v22 = *v10 >> 4;
          LOBYTE(v22) = (*v10 & 0x10) != 0;
          if ( (unsigned __int8)TtmiUpdateActiveTerminalCount(a1, v22, v4[11]) )
            *a2 = v9;
        }
      }
      v4 = *(unsigned int **)v4;
    }
    while ( v4 != v3 );
    if ( v5 )
      TtmiPurgeSessionPowerRequestEntries(a1);
  }
}
