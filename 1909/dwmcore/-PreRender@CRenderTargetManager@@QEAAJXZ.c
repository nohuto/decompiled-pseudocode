/*
 * XREFs of ?PreRender@CRenderTargetManager@@QEAAJXZ @ 0x180076DE8
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::PreRender(CRenderTargetManager *this)
{
  unsigned int v1; // edi
  unsigned int v3; // eax
  char v4; // bp
  __int64 v5; // rsi
  _QWORD *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // r14
  signed int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // rsi
  _QWORD *v18; // r14
  signed int v19; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  __int64 v22; // rcx

  v1 = 0;
  v3 = *((_DWORD *)this + 12);
  if ( *(int *)(*((_QWORD *)this + 2) + 1096LL) < 2 )
  {
    v4 = 0;
    goto LABEL_3;
  }
  v17 = 0LL;
  v4 = 1;
  if ( !v3 )
  {
LABEL_3:
    v5 = 0LL;
    if ( v3 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v5);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v6 + 48LL))(v6, 110LL) )
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD *))(v6[8] + 40LL))(v6 + 8);
          v1 = v21;
          if ( v21 < 0 )
            break;
        }
        v3 = *((_DWORD *)this + 12);
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= v3 )
          goto LABEL_6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xBBu, 0LL);
    }
    else
    {
LABEL_6:
      v7 = 0LL;
      if ( *((_DWORD *)this + 20) )
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v7);
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
          v1 = v9;
          if ( v9 < 0 )
            break;
          v7 = (unsigned int)(v7 + 1);
          if ( (unsigned int)v7 >= *((_DWORD *)this + 20) )
          {
            v3 = *((_DWORD *)this + 12);
            goto LABEL_10;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC2u, 0LL);
      }
      else
      {
LABEL_10:
        v11 = 0LL;
        if ( v3 )
        {
          while ( 1 )
          {
            v12 = *((_QWORD *)this + 3);
            v13 = *(_QWORD **)(v12 + 8 * v11);
            if ( (!v4
               || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*v13 + 48LL))(*(_QWORD *)(v12 + 8 * v11), 141LL))
              && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v13 + 48LL))(v13, 110LL) )
            {
              v14 = (*(__int64 (__fastcall **)(_QWORD *))(v13[8] + 40LL))(v13 + 8);
              v1 = v14;
              if ( v14 < 0 )
                break;
            }
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= *((_DWORD *)this + 12) )
              return v1;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xCEu, 0LL);
        }
      }
    }
    return v1;
  }
  while ( 1 )
  {
    v18 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v17);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v18 + 48LL))(v18, 141LL) )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD *))(v18[8] + 40LL))(v18 + 8);
      v1 = v19;
      if ( v19 < 0 )
        break;
    }
    v3 = *((_DWORD *)this + 12);
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= v3 )
      goto LABEL_3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xACu, 0LL);
  return v1;
}
