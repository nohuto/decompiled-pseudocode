/*
 * XREFs of ndisOidPreNicSwitchCaps @ 0x1C00E1D40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 */

unsigned __int8 __fastcall ndisOidPreNicSwitchCaps(__int64 *a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  __int64 v3; // rsi
  unsigned __int8 v4; // di
  __int64 v5; // r15
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v2 = 0;
  v3 = a1[4];
  v4 = 0;
  v5 = a1[3];
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqq(0x20u, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v1, v5, v3);
  *((_DWORD *)a1 + 10) = 0;
  v7 = *(_DWORD *)(v3 + 48);
  if ( v7 >= 0x20 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
      goto LABEL_6;
    if ( !v1 )
      goto LABEL_18;
    v4 = 1;
    v8 = *(_DWORD *)(v3 + 32) == 66094 ? *(_QWORD *)(v1 + 3584) : *(_QWORD *)(v1 + 3592);
    if ( !v8 )
    {
LABEL_6:
      v4 = 1;
      v2 = -1073741637;
    }
    else
    {
      v9 = *(_QWORD *)(v3 + 40);
      *(_OWORD *)v9 = *(_OWORD *)v8;
      *(_OWORD *)(v9 + 16) = *(_OWORD *)(v8 + 16);
      if ( v7 >= 0x74 )
      {
        *(_OWORD *)(v9 + 32) = *(_OWORD *)(v8 + 32);
        *(_OWORD *)(v9 + 48) = *(_OWORD *)(v8 + 48);
        *(_OWORD *)(v9 + 64) = *(_OWORD *)(v8 + 64);
        *(_OWORD *)(v9 + 80) = *(_OWORD *)(v8 + 80);
        *(_OWORD *)(v9 + 96) = *(_OWORD *)(v8 + 96);
        if ( v7 >= 0x84 )
        {
          *(_OWORD *)(v9 + 112) = *(_OWORD *)(v8 + 112);
          *(_DWORD *)(v9 + 128) = *(_DWORD *)(v8 + 128);
          *(_DWORD *)(v3 + 52) = 132;
        }
        else
        {
          *(_DWORD *)(v9 + 112) = *(_DWORD *)(v8 + 112);
          v11 = *(_QWORD *)(v3 + 40);
          *(_BYTE *)(v11 + 1) = 2;
          *(_WORD *)(v11 + 2) = 116;
          *(_DWORD *)(v3 + 52) = 116;
        }
      }
      else
      {
        v10 = *(_QWORD *)(v3 + 40);
        *(_BYTE *)(v10 + 1) = 1;
        *(_WORD *)(v10 + 2) = 32;
        *(_DWORD *)(v3 + 52) = 32;
      }
    }
  }
  else
  {
    *(_DWORD *)(v3 + 56) = 32;
    v2 = -1073676268;
    v4 = 1;
  }
  *((_DWORD *)a1 + 10) = v2;
LABEL_18:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    v14 = v2;
    LODWORD(v13) = v4;
    WPP_SF_qqDD(0x21u, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v1, v5, v13, v14);
  }
  return v4;
}
