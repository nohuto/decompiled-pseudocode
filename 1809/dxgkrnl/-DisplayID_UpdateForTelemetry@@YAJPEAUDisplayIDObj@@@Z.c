/*
 * XREFs of ?DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z @ 0x1C00504EC
 * Callers:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0297AA0 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ @ 0x1C00506E8 (-IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_UpdateForTelemetry(struct DisplayIDObj *a1)
{
  __int64 v1; // rbp
  int v2; // r10d
  char *v3; // rsi
  int v4; // r14d
  int v5; // edi
  int v6; // r9d
  char v7; // r15
  char *v8; // r11
  char *v9; // r12
  __int64 v10; // rbx
  size_t v11; // r8
  int v12; // r13d
  char v13; // dl
  char v14; // al
  char v15; // al
  bool v16; // zf
  unsigned __int64 v17; // rdx
  char *v18; // r8
  char v19; // cl
  char v20; // cl
  int v22; // [rsp+78h] [rbp+10h]
  char *v23; // [rsp+80h] [rbp+18h]
  __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v1 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 3221225485LL;
  v2 = *((_DWORD *)a1 + 5);
  v3 = *(char **)a1;
  v22 = v2;
  v4 = 0;
  if ( v2 <= 0 )
    return 0LL;
  while ( 2 )
  {
    v5 = (unsigned __int8)v3[1];
    LOBYTE(v6) = 1;
    v7 = v5 + 5;
    v8 = &v3[(unsigned __int8)(v5 + 5)];
    v23 = v8;
    v9 = v8 - 1;
    if ( !v3[1] )
      goto LABEL_37;
    v10 = (unsigned __int64)(v3 + 4) & -(__int64)((_BYTE)v5 != 0);
    v6 = 0;
    while ( 1 )
    {
      v11 = *(unsigned __int8 *)(v10 + 2);
      v12 = v11 + 3;
      if ( (unsigned int)v5 < 3 || v5 < v12 )
        break;
      v13 = *(_BYTE *)v10;
      if ( !*(_BYTE *)v10 )
      {
        v14 = (unsigned __int8)*v3 >> 4;
        if ( v14 == 2 )
          goto LABEL_35;
        if ( v14 == 1 && v1 + 4 != v10 )
        {
          LOBYTE(v6) = v7 == 127;
          break;
        }
      }
      v15 = (unsigned __int8)*v3 >> 4;
      if ( v15 == 2 )
      {
        if ( v13 == 32 )
        {
          v24 = v10;
          if ( DisplayID_ProductId_Parser::IsValidBlock((DisplayID_ProductId_Parser *)&v24) )
            goto LABEL_33;
        }
        else
        {
          if ( v13 == 40 )
          {
            v16 = v13 == 40;
LABEL_26:
            if ( v16 && (_BYTE)v11 == 22 )
              *(_DWORD *)(v10 + 21) = v6;
            goto LABEL_34;
          }
          if ( v13 == 41 && v13 == 41 && (_BYTE)v11 == 16 )
          {
            *(_QWORD *)(v10 + 3) = 0LL;
            *(_QWORD *)(v10 + 11) = 0LL;
          }
        }
      }
      else
      {
        if ( v15 != 1 )
          return 3221225659LL;
        if ( v13 )
        {
          if ( v13 == 10 )
          {
            if ( v5 >= (int)v11 + 4 && (_BYTE)v11 )
            {
              memset((void *)(v10 + 4), 0, v11);
              v6 = 0;
            }
            goto LABEL_34;
          }
          v16 = v13 == 18;
          goto LABEL_26;
        }
        if ( v5 >= 14 )
LABEL_33:
          *(_DWORD *)(v10 + 8) = v6;
      }
LABEL_34:
      v5 -= v12;
      v10 += (unsigned int)v12;
      if ( v5 <= 0 )
      {
LABEL_35:
        LOBYTE(v6) = 1;
        break;
      }
    }
    v8 = v23;
    v2 = v22;
LABEL_37:
    *v9 = 0;
    v17 = v9 - v3;
    v18 = v3;
    v19 = 0;
    if ( v3 > v9 )
      v17 = 0LL;
    if ( v17 )
    {
      do
      {
        v20 = *v18++;
        v19 = *v9 + v20;
        *v9 = v19;
      }
      while ( v18 - v3 < v17 );
    }
    *v9 = -v19;
    if ( (_BYTE)v6 )
    {
      ++v4;
      v3 = v8;
      if ( v4 >= v2 )
        return 0LL;
      continue;
    }
    return 3221225659LL;
  }
}
