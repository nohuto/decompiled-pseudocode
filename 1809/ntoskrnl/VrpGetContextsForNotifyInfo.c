/*
 * XREFs of VrpGetContextsForNotifyInfo @ 0x140808C9C
 * Callers:
 *     VrpShouldOperateOnCall @ 0x14080943C (VrpShouldOperateOnCall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VrpGetContextsForNotifyInfo(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // r10
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 result; // rax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx

  v4 = 0LL;
  if ( a1 > 30 )
  {
    if ( a1 > 40 )
    {
      v21 = a1 - 41;
      if ( !v21 )
        goto LABEL_37;
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_50;
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_37;
      v24 = v23 - 1;
      if ( !v24 )
        goto LABEL_50;
      v25 = v24 - 1;
      if ( !v25 )
        goto LABEL_37;
      v26 = v25 - 1;
      if ( !v26 )
        goto LABEL_50;
      v20 = v26 - 1;
      if ( !v20 )
        goto LABEL_51;
    }
    else
    {
      if ( a1 == 40 )
      {
        result = a2[1];
        goto LABEL_38;
      }
      v13 = a1 - 31;
      if ( !v13 )
        goto LABEL_50;
      v14 = v13 - 1;
      if ( !v14 )
      {
        result = *(_QWORD *)(*a2 + 72LL);
        goto LABEL_38;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
LABEL_25:
        v4 = *(_QWORD *)(*a2 + 32LL);
        result = *(_QWORD *)(*a2 + 40LL);
        goto LABEL_38;
      }
      v16 = v15 - 1;
      if ( !v16 )
        goto LABEL_15;
      v17 = v16 - 1;
      if ( !v17 )
        goto LABEL_50;
      v18 = v17 - 1;
      if ( !v18 )
        goto LABEL_51;
      v19 = v18 - 1;
      if ( !v19 )
      {
LABEL_50:
        v4 = a2[4];
        goto LABEL_51;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
LABEL_37:
        result = a2[4];
        goto LABEL_38;
      }
    }
    if ( v20 != 1 )
      goto LABEL_49;
    goto LABEL_50;
  }
  if ( a1 == 30 )
    goto LABEL_17;
  if ( a1 > 9 )
  {
    if ( a1 != 11 && a1 != 13 )
    {
      if ( a1 == 14 )
        goto LABEL_17;
      if ( a1 <= 14 )
        goto LABEL_49;
      if ( a1 > 25 )
      {
        if ( a1 == 26 || a1 == 28 )
        {
          result = *(_QWORD *)(*a2 + 88LL);
          goto LABEL_38;
        }
        goto LABEL_25;
      }
    }
    goto LABEL_50;
  }
  if ( a1 != 9 )
  {
    if ( a1 )
    {
      v5 = a1 - 1;
      if ( !v5 )
        goto LABEL_16;
      v6 = v5 - 1;
      if ( !v6 )
      {
LABEL_15:
        result = a2[3];
        goto LABEL_38;
      }
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                if ( v11 == 1 )
                  goto LABEL_14;
LABEL_49:
                result = 0LL;
                goto LABEL_38;
              }
            }
          }
LABEL_16:
          result = a2[6];
          goto LABEL_38;
        }
        goto LABEL_15;
      }
LABEL_51:
      result = a2[5];
      goto LABEL_38;
    }
LABEL_17:
    result = a2[2];
    goto LABEL_38;
  }
LABEL_14:
  result = a2[7];
LABEL_38:
  *a3 = result;
  *a4 = v4;
  return result;
}
