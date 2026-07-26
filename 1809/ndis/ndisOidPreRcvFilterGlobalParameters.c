/*
 * XREFs of ndisOidPreRcvFilterGlobalParameters @ 0x1C00E1FA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 */

unsigned __int8 __fastcall ndisOidPreRcvFilterGlobalParameters(__int64 *a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  __int64 v3; // r14
  __int64 v5; // r12
  unsigned __int8 v6; // di
  __int64 v7; // r15
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-28h]

  v1 = a1[4];
  v2 = 0;
  v3 = *a1;
  v5 = a1[3];
  v6 = 0;
  v7 = *(_QWORD *)(v1 + 40);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqq(0xCu, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v3, v5, v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 0x10u )
  {
    *(_DWORD *)(v1 + 56) = 16;
    v2 = -1073676268;
    goto LABEL_13;
  }
  if ( !v3 )
  {
    v6 = 0;
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(v3 + 3560) )
  {
LABEL_4:
    v2 = -1073741637;
LABEL_13:
    *((_DWORD *)a1 + 10) = v2;
    v6 = 1;
    goto LABEL_14;
  }
  v8 = *(_DWORD *)(v1 + 4);
  if ( v8 == 2 || !v8 )
  {
    *(_QWORD *)v7 = 1048960LL;
    *(_DWORD *)(v7 + 12) = *(_DWORD *)(v3 + 3556);
    *(_DWORD *)(v7 + 8) = *(_DWORD *)(v3 + 3552);
    *(_DWORD *)(v1 + 52) = 16;
    goto LABEL_13;
  }
LABEL_14:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    LODWORD(v10) = v6;
    WPP_SF_qqDD(0xDu, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v3, v5, v10, v2);
  }
  return v6;
}
