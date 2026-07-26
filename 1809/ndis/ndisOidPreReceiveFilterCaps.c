/*
 * XREFs of ndisOidPreReceiveFilterCaps @ 0x1C00E21D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 */

unsigned __int8 __fastcall ndisOidPreReceiveFilterCaps(__int64 *a1)
{
  __int64 v1; // r14
  int v2; // ebx
  __int64 v3; // rbp
  unsigned __int8 v4; // di
  __int64 v5; // r12
  size_t v7; // r8
  _WORD *v8; // rdx
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+28h] [rbp-30h]

  v1 = *a1;
  v2 = 0;
  v3 = a1[4];
  v4 = 0;
  v5 = a1[3];
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqq(0xAu, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v1, v5, v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    v7 = *(unsigned int *)(v3 + 48);
    if ( (unsigned int)v7 < 0x38 )
    {
      *(_DWORD *)(v3 + 56) = 56;
      v2 = -1073676268;
      v4 = 1;
      goto LABEL_21;
    }
    if ( !v1 )
      goto LABEL_22;
    if ( *(_DWORD *)(v3 + 32) == 66081 )
      v8 = *(_WORD **)(v1 + 3560);
    else
      v8 = *(_WORD **)(v1 + 3568);
    if ( v8 )
    {
      v9 = v8[1];
      v10 = 84;
      if ( v9 < 0x54u )
        v10 = v9;
      if ( v10 < (unsigned int)v7 )
        v7 = v10;
      v11 = v7;
      memmove(*(void **)(v3 + 40), v8, v7);
      v12 = *(_QWORD *)(v3 + 40);
      v4 = 1;
      if ( v11 < 0x54 )
      {
        if ( v11 >= 0x38 )
        {
          *(_BYTE *)(v12 + 1) = 1;
          *(_WORD *)(v12 + 2) = 56;
        }
      }
      else
      {
        *(_BYTE *)(v12 + 1) = 2;
        *(_WORD *)(v12 + 2) = 84;
      }
      *(_DWORD *)(v3 + 52) = v11;
      goto LABEL_21;
    }
  }
  v4 = 1;
  v2 = -1073741637;
LABEL_21:
  *((_DWORD *)a1 + 10) = v2;
LABEL_22:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    v15 = v2;
    LODWORD(v14) = v4;
    WPP_SF_qqDD(0xBu, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v1, v5, v14, v15);
  }
  return v4;
}
