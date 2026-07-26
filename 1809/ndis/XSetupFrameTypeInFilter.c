/*
 * XREFs of XSetupFrameTypeInFilter @ 0x1C010DC10
 * Callers:
 *     XNoteFilterOpenAdapter @ 0x1C001AAC0 (XNoteFilterOpenAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall XSetupFrameTypeInFilter(__int64 a1, __int64 a2)
{
  char v4; // si
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // r8
  __int16 v10; // r9
  __int64 v11; // rcx

  v4 = 0;
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0xBu, &WPP_41f5eb516e8d3881d364c8f3baaf103d_Traceguids, a2);
  v5 = *(_DWORD *)(a2 + 248);
  if ( !v5 || (v6 = *(_DWORD *)(a1 + 24), v6 + v5 < v5) || v6 + v5 >= 0x10 )
  {
LABEL_21:
    *(_QWORD *)(a2 + 424) = *(_QWORD *)(a1 + 8);
    ++*(_DWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 8) = a2;
    goto LABEL_17;
  }
  v7 = 0;
  if ( v6 )
  {
    do
    {
      v8 = 0LL;
      while ( *(_WORD *)(a2 + 2 * v8 + 252) != *(_WORD *)(a1 + 16LL * v7 + 32) )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v5 )
          goto LABEL_10;
      }
      v4 = 1;
LABEL_10:
      if ( v4 == 1 )
        goto LABEL_21;
    }
    while ( ++v7 < v6 );
  }
  v9 = 0LL;
  do
  {
    v10 = *(_WORD *)(a2 + 2 * v9 + 252);
    v11 = a1 + 16 * (v6 + 2LL);
    if ( v10 == 8 && v6 )
    {
      *(_WORD *)v11 = *(_WORD *)(a1 + 32);
      *(_QWORD *)(v11 + 8) = *(_QWORD *)(a1 + 40);
      *(_WORD *)(a1 + 32) = 8;
      *(_QWORD *)(a1 + 40) = a2;
    }
    else
    {
      *(_WORD *)v11 = v10;
      *(_QWORD *)(v11 + 8) = a2;
    }
    ++*(_DWORD *)(a1 + 24);
    v9 = (unsigned int)(v9 + 1);
    v6 = *(_DWORD *)(a1 + 24);
  }
  while ( (unsigned int)v9 < *(_DWORD *)(a2 + 248) );
  *(_QWORD *)(a2 + 424) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = a2;
LABEL_17:
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0xCu, &WPP_41f5eb516e8d3881d364c8f3baaf103d_Traceguids, a2);
}
