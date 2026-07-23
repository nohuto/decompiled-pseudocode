/*
 * XREFs of IopAddBugcheckPowerTriageData @ 0x140286F98
 * Callers:
 *     IopUpdateMinidumpContext @ 0x140281E58 (IopUpdateMinidumpContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KiIsAddressRangeValid @ 0x140191F34 (KiIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDevice @ 0x1402871F0 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageIrp @ 0x1402873E8 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x140287544 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1402876E0 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPowerTriageData(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r15d
  unsigned int v6; // edi
  __int64 v7; // rdx
  _QWORD **v8; // r14
  _QWORD *i; // rsi
  __int64 v10; // rdx
  _QWORD **v11; // r14
  int v12; // r15d
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8

  v5 = 0;
  v6 = 0;
  ((void (*)(void))IopAddBugcheckTriageDevice)();
  LOBYTE(v7) = 1;
  IopAddBugcheckTriageIrp(a3, v7);
  if ( KiIsAddressRangeValid(a2, 40LL) && *(_WORD *)a2 == 0x8000 )
  {
    IoAddTriageDumpDataBlock(a2, 40);
    v8 = *(_QWORD ***)(a2 + 8);
    if ( v8 )
    {
      if ( KiIsAddressRangeValid(*(_QWORD *)(a2 + 8), 16LL) )
      {
        IoAddTriageDumpDataBlock((int)v8, 16);
        for ( i = *v8; i && i != *(_QWORD **)(a2 + 8) && v5 < 10; i = (_QWORD *)*i )
        {
          ++v5;
          if ( !KiIsAddressRangeValid((__int64)i, 32LL) )
            goto LABEL_14;
          IoAddTriageDumpDataBlock((int)i, 32);
          if ( (_QWORD **)i[1] != v8 )
            goto LABEL_14;
          LOBYTE(v10) = 1;
          IopAddBugcheckTriageIrp(i[2], v10);
          IopAddBugcheckTriageDevice(i[3]);
          v8 = (_QWORD **)i;
        }
      }
      else
      {
LABEL_14:
        v6 = -1073741823;
      }
    }
    v11 = *(_QWORD ***)(a2 + 16);
    if ( v11 )
    {
      v12 = 0;
      if ( KiIsAddressRangeValid(*(_QWORD *)(a2 + 16), 16LL) )
      {
        IoAddTriageDumpDataBlock((int)v11, 16);
        v13 = *v11;
        if ( *v11 )
        {
          while ( v13 != *(_QWORD **)(a2 + 16) && v12 < 10 )
          {
            ++v12;
            if ( !KiIsAddressRangeValid((__int64)v13, 24LL) )
              goto LABEL_24;
            IoAddTriageDumpDataBlock((int)v13, 24);
            if ( (_QWORD **)v13[1] != v11 )
              goto LABEL_24;
            v11 = (_QWORD **)v13;
            v6 = IopAddBugcheckTriageThread(v13[2], v14, v15);
            v13 = (_QWORD *)*v13;
            if ( !v13 )
              break;
          }
        }
      }
      else
      {
LABEL_24:
        v6 = -1073741823;
      }
    }
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 24));
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
