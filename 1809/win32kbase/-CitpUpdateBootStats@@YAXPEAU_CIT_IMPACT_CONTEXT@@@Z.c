/*
 * XREFs of ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0077440
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0076BD8 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0076F08 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00336E8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0077508 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C0077EF8 (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 *     ?CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00794EC (-CitpDPDataSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitpUpdateBootStats(struct _CIT_IMPACT_CONTEXT *a1)
{
  __int64 v2; // rbx
  unsigned __int8 *v3; // r9
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // cx
  ULONG v7; // eax
  __int64 v8; // r8
  unsigned __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  __int16 v18; // dx
  void *v19; // [rsp+20h] [rbp-18h]
  unsigned __int16 v20; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 v21; // [rsp+50h] [rbp+18h] BYREF

  v20 = 0;
  LODWORD(v2) = 0;
  v21 = 0;
  if ( (unsigned __int8)RtlIsMultiSessionSku() )
  {
    v7 = RtlLengthSid(*((PSID *)a1 + 12));
    v3 = (unsigned __int8 *)*((_QWORD *)a1 + 12);
    v2 = 314159LL;
    v8 = v7;
    if ( v7 >= 8uLL )
    {
      v9 = (unsigned __int64)v7 >> 3;
      v8 = v7 - 8 * v9;
      do
      {
        v10 = v3[6] + 37 * (v3[5] + 37 * (v3[4] + 37 * (v3[3] + 37 * (v3[2] + 37 * (v3[1] + 37 * (*v3 + 37 * v2))))));
        v11 = v3[7];
        v3 += 8;
        v2 = v11 + 37 * v10;
        --v9;
      }
      while ( v9 );
    }
    if ( v8 >= 1 && v8 <= 7 )
    {
      v12 = v8 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 != 1 )
                    goto LABEL_5;
                  LODWORD(v2) = *v3++ + 37 * v2;
                }
                LODWORD(v2) = *v3++ + 37 * v2;
              }
              LODWORD(v2) = *v3++ + 37 * v2;
            }
            LODWORD(v2) = *v3++ + 37 * v2;
          }
          LODWORD(v2) = *v3++ + 37 * v2;
        }
        LODWORD(v2) = *v3++ + 37 * v2;
      }
      LODWORD(v2) = *v3 + 37 * v2;
    }
  }
LABEL_5:
  if ( (int)CitpUpdateActiveBootId(v2, 1u, &v21, &v20, v19) >= 0 )
  {
    v4 = v20;
    if ( v20 )
    {
      v5 = *((_WORD *)a1 + 158);
      if ( !v5 || v5 > v20 )
        *((_WORD *)a1 + 158) = v20;
      v6 = *((_WORD *)a1 + 159);
      if ( !v6 || v6 < v4 )
        *((_WORD *)a1 + 159) = v4;
      if ( v21 )
      {
        if ( v21 != v4 )
        {
          CitpStatIncrement((unsigned __int16 *)a1 + 147, 1);
          CitpStatIncrement((unsigned __int16 *)a1 + 267, v18);
          CitpPostUpdateUseInfoSave(a1, 0LL);
          CitpDPDataSave(a1);
        }
      }
    }
  }
}
