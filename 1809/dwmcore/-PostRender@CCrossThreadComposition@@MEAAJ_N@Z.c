/*
 * XREFs of ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180057C80
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessRoundTripRequest@CCrossThreadComposition@@AEAA_NXZ @ 0x180057F0C (-ProcessRoundTripRequest@CCrossThreadComposition@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq @ 0x180149B9C (McTemplateU0qqqq.c)
 *     McTemplateU0qqxx @ 0x180152158 (McTemplateU0qqxx.c)
 */

__int64 __fastcall CCrossThreadComposition::PostRender(CCrossThreadComposition *this, unsigned __int8 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  unsigned int v4; // ebx
  int v7; // r12d
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // r14d
  bool v12; // al
  unsigned int v13; // esi
  unsigned __int8 v14; // r13
  unsigned int i; // ebx
  __int64 v16; // rax
  unsigned __int8 v17; // bp
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  int v22; // edx
  unsigned int v23; // ebx
  _DWORD *v24; // rsi
  int v25; // ecx
  __int64 v26; // r14
  bool v27; // bp
  __int64 v28; // rax
  __int64 v29; // rdi
  _QWORD *v30; // rsi
  unsigned __int64 v31; // rbx
  bool v32; // [rsp+70h] [rbp+8h]
  __int64 v33; // [rsp+80h] [rbp+18h]

  v2 = *((_QWORD *)this + 8);
  v3 = 0LL;
  v4 = 0;
  v7 = 0;
  if ( !*(_DWORD *)(v2 + 80) )
    goto LABEL_8;
  do
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8LL * v4);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 160LL))(v8, a2);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x10Du);
    if ( !v7 || v7 >= 0 && v11 < 0 )
      v7 = v11;
    ++v4;
  }
  while ( v4 < *(_DWORD *)(v2 + 80) );
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v7, 0x1C2u);
  }
  else
  {
LABEL_8:
    if ( !a2 )
    {
      v12 = CCrossThreadComposition::ProcessRoundTripRequest(this);
      v13 = *((_DWORD *)this + 160);
      v14 = 0;
      v32 = v12;
      v27 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0;
      for ( i = 0; (!v14 || v27) && i < v13; ++i )
      {
        v26 = 8LL * i;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v26 + *((_QWORD *)this + 77)) + 8LL))(*(_QWORD *)(v26 + *((_QWORD *)this + 77))) )
        {
          v14 = 1;
          if ( v27 )
          {
            v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v26 + *((_QWORD *)this + 77)) + 24LL))(*(_QWORD *)(v26 + *((_QWORD *)this + 77)));
            if ( v28 )
            {
              ++*(_DWORD *)(v28 + 84);
              *((_BYTE *)this + 504) = 1;
            }
          }
        }
      }
      v16 = *((_QWORD *)this + 28);
      v17 = *(_DWORD *)(v16 + 256) || (*(_BYTE *)(v16 + 416) & 2) != 0 || *(_DWORD *)(v16 + 160);
      v18 = *(_QWORD *)(*((_QWORD *)this + 9) + 304LL);
      v33 = v18;
      if ( *((_BYTE *)this + 504) )
      {
        v23 = 0;
        if ( *((_DWORD *)this + 84) )
        {
          do
          {
            v24 = *(_DWORD **)(*((_QWORD *)this + 39) + 8LL * v23);
            if ( v24 )
            {
              v25 = v24[21];
              if ( v25 || v24[19] )
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
                {
                  McTemplateU0qqxx(v25, (unsigned int)&CHANNELANIMATIONS_ACTIVE, v24[4], v24[5], v25, v24[19]);
                  v25 = v24[21];
                }
                dword_180308140 += v25;
                dword_180308144 += v24[19];
                v24[21] = 0;
                v24[19] = 0;
              }
            }
            ++v23;
          }
          while ( v23 < *((_DWORD *)this + 84) );
          v18 = v33;
        }
        *((_BYTE *)this + 504) = 0;
      }
      if ( v32 || v14 || v17 || v18 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          McTemplateU0qqqq(v18 != 0, (unsigned int)&EVTDESC_SCHEDULE_COMPOSITIONPASS, v32, v14, v17, v18 != 0);
          v18 = v33;
        }
        if ( v32 )
          v22 = 256;
        else
          v22 = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 67) + 104LL))(
          *((_QWORD *)this + 67),
          0LL,
          v22 | (32 * v17) | (v14 != 0 ? 0x10 : 0) | (v18 != 0 ? 0x40 : 0));
      }
      CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved = 0;
    }
  }
  v19 = (_QWORD *)*((_QWORD *)this + 17);
  v20 = v19[3];
  if ( v20 )
  {
    v29 = *(_QWORD *)(v20 + 120);
    if ( v29 )
    {
      v30 = (_QWORD *)v19[4];
      v31 = (unsigned __int64)(v19[5] - (_QWORD)v30 + 7LL) >> 3;
      if ( (unsigned __int64)v30 > v19[5] )
        v31 = 0LL;
      if ( v31 )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v30 + 24LL))(*v30, v29);
          ++v3;
          ++v30;
        }
        while ( v3 != v31 );
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 96LL))(v29);
    }
  }
  return (unsigned int)v7;
}
