/*
 * XREFs of ndisParseReceivedNBL @ 0x1C009C240
 * Callers:
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C00A9EF8 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisParseReceivedNBL(int a1, __int64 a2, _WORD *a3, char *a4)
{
  char v4; // bl
  char v7; // di
  __int16 v8; // ax
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // r14
  char *v13; // rdx
  char *v14; // rdx
  char result; // al
  __int16 v16; // [rsp+50h] [rbp+8h]
  unsigned __int16 v17; // [rsp+68h] [rbp+20h]

  v4 = 0;
  v7 = 1;
  if ( a1 )
  {
    v8 = *(_WORD *)(a2 + 200);
LABEL_20:
    *a3 = v8;
    v4 = 1;
    goto LABEL_21;
  }
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(v9 + 8);
  v11 = *(_DWORD *)(v10 + 40);
  if ( v11 < 0xE || (v12 = *(unsigned int *)(v9 + 16), v11 <= (unsigned int)v12) || v11 - (unsigned int)v12 < 0xE )
  {
LABEL_4:
    v7 = 0;
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(v10 + 10) & 5) != 0 )
    v13 = *(char **)(v10 + 24);
  else
    v13 = (char *)MmMapLockedPages((PMDL)v10, 0);
  v14 = &v13[v12];
  LOBYTE(v17) = v14[13];
  HIBYTE(v16) = v17;
  HIBYTE(v17) = v14[12];
  LOBYTE(v16) = HIBYTE(v17);
  if ( v17 > 0x600u )
  {
    if ( v17 != 0x8100 )
    {
LABEL_15:
      v8 = v16;
      goto LABEL_20;
    }
    if ( v11 >= 0x12 && v11 - (unsigned int)v12 >= 0x12 )
    {
      v16 = *((_WORD *)v14 + 8);
      goto LABEL_15;
    }
    goto LABEL_4;
  }
  if ( v14[14] == -86 && v14[15] == -86 && v14[16] == 3 )
  {
    v8 = *((_WORD *)v14 + 10);
    goto LABEL_20;
  }
LABEL_21:
  result = v7;
  *a4 = v4;
  return result;
}
