/*
 * XREFs of ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180070190
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800D4D7C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq @ 0x180164C60 (McTemplateU0qqqq.c)
 *     McTemplateU0qqx @ 0x180176738 (McTemplateU0qqx.c)
 *     McTemplateU0qqxx @ 0x180178784 (McTemplateU0qqxx.c)
 */

__int64 __fastcall CComposition::PostRender(CComposition *this, unsigned int a2)
{
  __int64 v2; // rsi
  int v3; // r15d
  __int64 v4; // rbx
  unsigned __int8 v5; // bp
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // r14d
  unsigned int v11; // ebx
  unsigned __int8 v12; // r13
  unsigned int v13; // esi
  unsigned __int8 v14; // r12
  bool v15; // bp
  __int64 i; // rbx
  __int64 v17; // rax
  unsigned __int8 v18; // bp
  char v19; // r14
  int v21; // r10d
  __int64 j; // rbx
  _DWORD *v23; // rsi
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rsi
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  unsigned __int64 v31; // rax
  unsigned int v32; // ecx
  __int64 v33; // r9
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  _BYTE v41[20]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v42; // [rsp+44h] [rbp-34h]

  v2 = *((_QWORD *)this + 8);
  v3 = 0;
  v4 = 0LL;
  v5 = a2;
  if ( *(_DWORD *)(v2 + 80) )
  {
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8 * v4);
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 160LL))(v7, v5);
      v10 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x110u, 0LL);
      if ( !v3 || v3 >= 0 && v10 < 0 )
        v3 = v10;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *(_DWORD *)(v2 + 80) );
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v3, 0x10EAu, 0LL);
      return (unsigned int)v3;
    }
  }
  if ( !v5 )
  {
    v11 = 0;
    v12 = 0;
    if ( !*((_DWORD *)this + 122) )
    {
LABEL_10:
      v13 = *((_DWORD *)this + 164);
      v14 = 0;
      v15 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0;
      for ( i = 0LL; (!v14 || v15) && (unsigned int)i < v13; i = (unsigned int)(i + 1) )
      {
        v25 = *(_QWORD *)(8 * i + *((_QWORD *)this + 79));
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25) )
        {
          v14 = 1;
          if ( v15 )
          {
            v40 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(8 * i + *((_QWORD *)this + 79)) + 24LL))(*(_QWORD *)(8 * i + *((_QWORD *)this + 79)));
            if ( v40 )
            {
              ++*(_DWORD *)(v40 + 84);
              *((_BYTE *)this + 520) = 1;
            }
          }
        }
      }
      v17 = *((_QWORD *)this + 30);
      v18 = *(_DWORD *)(v17 + 256) || (*(_BYTE *)(v17 + 416) & 2) != 0 || *(_DWORD *)(v17 + 160);
      v19 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9));
      if ( *((_BYTE *)this + 520) )
      {
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 88); j = (unsigned int)(j + 1) )
        {
          v23 = *(_DWORD **)(*((_QWORD *)this + 41) + 8 * j);
          if ( v23 )
          {
            v24 = v23[21];
            if ( v24 || v23[19] )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
              {
                McTemplateU0qqxx(v24, (unsigned int)&CHANNELANIMATIONS_ACTIVE, v23[4], v23[5], v24, v23[19]);
                v24 = v23[21];
              }
              dword_180339910 += v24;
              dword_180339914 += v23[19];
              v23[21] = 0;
              v23[19] = 0;
            }
          }
        }
        *((_BYTE *)this + 520) = 0;
      }
      if ( v12 || v14 || v18 || v19 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0qqqq(v18, (unsigned int)&EVTDESC_SCHEDULE_COMPOSITIONPASS, v12, v14, v18, v19);
        if ( v19 )
          v21 = 64;
        else
          v21 = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 69) + 96LL))(
          *((_QWORD *)this + 69),
          0LL,
          (v14 != 0 ? 0x10 : 0) | v21 | (v12 != 0 ? 0x100 : 0) | (32 * (unsigned int)v18));
      }
      CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved = 0;
      return (unsigned int)v3;
    }
    while ( 1 )
    {
      v26 = *((_QWORD *)this + 58) + 16LL * v11;
      v27 = *(_DWORD *)(v26 + 4);
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            v29 = *((_QWORD *)this + 47);
            if ( !v29
              || (v30 = *(_QWORD **)(v29 + 8), v31 = *(_QWORD *)(v26 + 8), v30[11] >= v31)
              || v30[7] > v31 && *(_QWORD *)((char *)v30 + 76) < v31 )
            {
              *(_DWORD *)v41 = 8;
              *(_OWORD *)&v41[4] = 0uLL;
              v42 = 0LL;
              *(_DWORD *)&v41[8] = *(_DWORD *)v26;
              CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v41);
              *(_DWORD *)(v26 + 4) = 0;
              *(_QWORD *)(v26 + 8) = 0LL;
              v32 = *((_DWORD *)this + 122);
              *(_OWORD *)v41 = *(_OWORD *)v26;
              if ( v11 >= v32 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, -2147024809, 0x19Fu, 0LL);
              }
              else
              {
                v33 = *((_QWORD *)this + 58);
                v34 = v11;
                if ( v11 < v32 - 1 )
                {
                  do
                  {
                    a2 = v34 + 1;
                    v38 = 2LL * v34;
                    v39 = 2LL * (v34 + 1);
                    v34 = a2;
                    *(_OWORD *)(v33 + 8 * v38) = *(_OWORD *)(v33 + 8 * v39);
                    v32 = *((_DWORD *)this + 122);
                  }
                  while ( a2 < v32 - 1 );
                }
                *((_DWORD *)this + 122) = v32 - 1;
              }
              if ( v11 )
                --v11;
              goto LABEL_59;
            }
          }
        }
        else
        {
          *(_DWORD *)(v26 + 4) = 2;
          v35 = *((_QWORD *)this + 47);
          if ( v35 )
          {
            v36 = *(_QWORD *)(v35 + 8);
            if ( *((_DWORD *)this + 92) == 1 )
              v37 = *(_QWORD *)(v36 + 88);
            else
              v37 = *(_QWORD *)(v36 + 76);
            *(_QWORD *)(v26 + 8) = v37 + 1;
          }
        }
      }
      *(_OWORD *)v41 = *(_OWORD *)v26;
LABEL_59:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0qqx(*(_DWORD *)v41, (_BYTE)a2, *(_DWORD *)&v41[4], *(_DWORD *)v41, v41[8]);
      ++v11;
      v12 |= *(_DWORD *)(v26 + 4) == 2;
      if ( v11 >= *((_DWORD *)this + 122) )
        goto LABEL_10;
    }
  }
  return (unsigned int)v3;
}
