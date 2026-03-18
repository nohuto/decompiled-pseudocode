/*
 * XREFs of ?PreRender@CRenderTargetManager@@QEAAJXZ @ 0x18005C934
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::PreRender(CRenderTargetManager *this)
{
  unsigned int v1; // edi
  int v3; // ebp
  unsigned int v4; // eax
  __int64 v5; // rsi
  _QWORD *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // r14
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v17; // rsi
  _QWORD *v18; // r14
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx

  v1 = 0;
  v3 = *(_DWORD *)(*((_QWORD *)this + 2) + 1080LL);
  if ( v3 >= 2 && (v17 = 0LL, *((_DWORD *)this + 12)) )
  {
    while ( 1 )
    {
      v18 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v17);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v18 + 48LL))(v18, 123LL) )
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD *))(v18[8] + 40LL))(v18 + 8);
        v1 = v19;
        if ( v19 < 0 )
          break;
      }
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= *((_DWORD *)this + 12) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xAEu);
  }
  else
  {
LABEL_2:
    v4 = *((_DWORD *)this + 12);
    v5 = 0LL;
    if ( v4 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD **)(*((_QWORD *)this + 3) + 8 * v5);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v6 + 48LL))(v6, 103LL) )
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD *))(v6[8] + 40LL))(v6 + 8);
          v1 = v21;
          if ( v21 < 0 )
            break;
        }
        v4 = *((_DWORD *)this + 12);
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= v4 )
          goto LABEL_5;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xBDu);
    }
    else
    {
LABEL_5:
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
            v4 = *((_DWORD *)this + 12);
            goto LABEL_9;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC4u);
      }
      else
      {
LABEL_9:
        v11 = 0LL;
        if ( v4 )
        {
          while ( 1 )
          {
            v12 = *((_QWORD *)this + 3);
            v13 = *(_QWORD **)(v12 + 8 * v11);
            if ( (v3 < 2
               || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*v13 + 48LL))(*(_QWORD *)(v12 + 8 * v11), 123LL))
              && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v13 + 48LL))(v13, 103LL) )
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
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xD0u);
        }
      }
    }
  }
  return v1;
}
