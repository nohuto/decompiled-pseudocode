/*
 * XREFs of VidSchiLogInterrupt @ 0x1C000A5D0
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000A1D0 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0039380 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 */

char __fastcall VidSchiLogInterrupt(__int64 a1, int *a2, char a3)
{
  int v3; // eax
  __int64 v7; // rcx
  __int64 *v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  _OWORD *v11; // rdi
  char v12; // al
  __int64 *v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // r15
  __int64 v16; // rdi
  _OWORD *v17; // rsi
  unsigned __int8 v18; // cf
  _QWORD *v19; // rdx
  unsigned int v20; // ecx
  _QWORD *v21; // rax
  unsigned int v22; // ecx

  v3 = *a2;
  if ( *a2 == 1 )
  {
    v7 = a2[3] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[4] + a1 + 76);
LABEL_3:
    v8 = *(__int64 **)(a1 + 616);
    v9 = (unsigned int)v7;
    if ( (unsigned int)v7 < *(_DWORD *)(a1 + 688) )
      v8 += v7;
    v10 = *v8;
    v11 = (_OWORD *)(*(_QWORD *)(v10 + 200) + 88LL * *(unsigned int *)(v10 + 212));
    memset(v11, 0, 0x58uLL);
    *((_BYTE *)v11 + 83) = 1;
    *(_DWORD *)(v10 + 212) = (*(_DWORD *)(v10 + 212) + 1) & (*(_DWORD *)(v10 + 208) - 1);
    *((_BYTE *)v11 + 80) = a3;
    if ( _bittest64(*(const signed __int64 **)(a1 + 576), v9) )
      v12 = 0;
    else
      v12 = 1;
    *((_BYTE *)v11 + 82) = v12;
    LOBYTE(v3) = *(_DWORD *)(v10 + 16) == 1;
    *((_BYTE *)v11 + 81) = v3;
    *v11 = *(_OWORD *)a2;
    v11[1] = *((_OWORD *)a2 + 1);
    v11[2] = *((_OWORD *)a2 + 2);
    v11[3] = *((_OWORD *)a2 + 3);
    v11[4] = *((_OWORD *)a2 + 4);
  }
  else if ( v3 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 1936) & 0x100) != 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
      v21[3] = a1;
      v21[4] = (unsigned int)a2[2];
      v21[5] = *((_QWORD *)a2 + 2);
      if ( (a2[18] & 1) != 0 )
        v22 = a2[6];
      else
        v22 = 0;
      v21[6] = v22;
      LOBYTE(v3) = WdLogEvent5_WdEvent(v21);
    }
  }
  else
  {
    v3 -= 2;
    switch ( v3 )
    {
      case 0:
        v7 = a2[4] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[5] + a1 + 76);
        goto LABEL_3;
      case 5:
      case 8:
        if ( (*(_DWORD *)(a1 + 1936) & 0x100) != 0 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, 0x1C0000000uLL);
          v19[3] = a1;
          v19[4] = (unsigned int)a2[2];
          if ( (a2[18] & 1) != 0 )
            v20 = a2[3];
          else
            v20 = 0;
          v19[5] = v20;
          v19[6] = (unsigned int)a2[4];
          v19[7] = *((_QWORD *)a2 + 3);
          LOBYTE(v3) = WdLogEvent5_WdEvent(v19);
        }
        return v3;
      case 7:
        v14 = a2[12] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[13] + a1 + 76);
        goto LABEL_21;
      case 9:
        v13 = *(__int64 **)(a1 + 616);
        v14 = a2[2] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[3] + a1 + 76);
        v15 = (unsigned int)v14;
        if ( (unsigned int)v14 < *(_DWORD *)(a1 + 688) )
          goto LABEL_15;
        goto LABEL_16;
      case 10:
        v14 = a2[10] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[11] + a1 + 76);
        goto LABEL_21;
      case 13:
      case 14:
        v14 = a2[2] + (unsigned int)*(unsigned __int8 *)((unsigned int)a2[3] + a1 + 76);
LABEL_21:
        v13 = *(__int64 **)(a1 + 616);
        v15 = (unsigned int)v14;
        if ( (unsigned int)v14 < *(_DWORD *)(a1 + 688) )
LABEL_15:
          v13 += v14;
LABEL_16:
        v16 = *v13;
        v17 = (_OWORD *)(*(_QWORD *)(v16 + 200) + 88LL * *(unsigned int *)(v16 + 212));
        memset(v17, 0, 0x58uLL);
        *((_BYTE *)v17 + 83) = 1;
        *(_DWORD *)(v16 + 212) = (*(_DWORD *)(v16 + 212) + 1) & (*(_DWORD *)(v16 + 208) - 1);
        *((_BYTE *)v17 + 80) = a3;
        v18 = _bittest64(*(const signed __int64 **)(a1 + 576), v15);
        goto LABEL_18;
      case 15:
        v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL) + 16LL);
        v17 = (_OWORD *)(*(_QWORD *)(v16 + 200) + 88LL * *(unsigned int *)(v16 + 212));
        memset(v17, 0, 0x58uLL);
        *((_BYTE *)v17 + 83) = 1;
        *(_DWORD *)(v16 + 212) = (*(_DWORD *)(v16 + 212) + 1) & (*(_DWORD *)(v16 + 208) - 1);
        *((_BYTE *)v17 + 80) = a3;
        v18 = _bittest64(*(const signed __int64 **)(a1 + 576), *(unsigned __int16 *)(v16 + 4));
LABEL_18:
        *((_BYTE *)v17 + 82) = !v18;
        LOBYTE(v3) = *(_DWORD *)(v16 + 16) == 1;
        *((_BYTE *)v17 + 81) = v3;
        *v17 = *(_OWORD *)a2;
        v17[1] = *((_OWORD *)a2 + 1);
        v17[2] = *((_OWORD *)a2 + 2);
        v17[3] = *((_OWORD *)a2 + 3);
        v17[4] = *((_OWORD *)a2 + 4);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
