/*
 * XREFs of ndisParseReceivedNBL @ 0x1C00102B4
 * Callers:
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C006A964 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
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
  unsigned int v11; // ebp
  __int64 v12; // r14
  unsigned int v13; // esi
  char *v14; // rdx
  char *v15; // rdx
  char result; // al
  unsigned __int16 v17; // [rsp+20h] [rbp-38h]
  __int16 v18; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v7 = 1;
  if ( a1 )
  {
    v8 = *(_WORD *)(a2 + 200);
LABEL_23:
    *a3 = v8;
    v4 = 1;
    goto LABEL_24;
  }
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
    goto LABEL_4;
  v11 = *(_DWORD *)(v10 + 40);
  if ( v11 < 0xE )
    goto LABEL_4;
  v12 = *(unsigned int *)(v9 + 16);
  if ( v11 <= (unsigned int)v12 )
    goto LABEL_4;
  v13 = v11 - v12;
  if ( v11 - (unsigned int)v12 < 0xE )
    goto LABEL_4;
  if ( (*(_BYTE *)(v10 + 10) & 5) != 0 )
    v14 = *(char **)(v10 + 24);
  else
    v14 = (char *)MmMapLockedPages((PMDL)v10, 0);
  v15 = &v14[v12];
  LOBYTE(v17) = v15[13];
  HIBYTE(v18) = v17;
  HIBYTE(v17) = v15[12];
  LOBYTE(v18) = HIBYTE(v17);
  if ( v17 > 0x600u )
  {
    if ( v17 != 0x8100 )
    {
LABEL_16:
      v8 = v18;
      goto LABEL_23;
    }
    if ( v11 >= 0x12 && v13 >= 0x12 )
    {
      v18 = *((_WORD *)v15 + 8);
      goto LABEL_16;
    }
LABEL_4:
    v7 = 0;
LABEL_24:
    result = v7;
    goto LABEL_25;
  }
  if ( v13 >= 0x16 )
  {
    if ( v15[14] != -86 || v15[15] != -86 || v15[16] != 3 )
      goto LABEL_24;
    v8 = *((_WORD *)v15 + 10);
    goto LABEL_23;
  }
  result = 0;
LABEL_25:
  *a4 = v4;
  return result;
}
