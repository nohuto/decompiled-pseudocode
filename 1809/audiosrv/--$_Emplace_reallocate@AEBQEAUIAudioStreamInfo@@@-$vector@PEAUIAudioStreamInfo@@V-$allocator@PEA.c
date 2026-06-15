/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAAPEAPEAUIAudioStreamInfo@@QEAPEAU2@AEBQEAU2@@Z @ 0x18000D730
 * Callers:
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18000D610 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800E290C (-AddStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CFC0 (--2@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 */

__int64 __fastcall std::vector<IAudioStreamInfo *>::_Emplace_reallocate<IAudioStreamInfo * const &>(
        _QWORD *a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // r15
  unsigned __int64 v13; // rdi
  HANDLE ProcessHeap; // rax
  char *v15; // rdi
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  char *v18; // rcx
  size_t v19; // r8
  __int64 v21; // rax
  SIZE_T v22; // rcx
  LPVOID v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // [rsp+60h] [rbp+8h]

  v6 = (__int64)&a2[-*a1] >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) || (v11 = v10 + v9, v10 + v9 < v8) )
    v11 = v8;
  v25 = v11;
  v12 = 8 * v11;
  v13 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v21 = -1LL;
    v13 = -1LL;
  }
  else
  {
    if ( v12 < 0x1000 )
    {
      if ( v12 )
      {
        ProcessHeap = GetProcessHeap();
        v15 = (char *)HeapAlloc(ProcessHeap, 0, v12);
      }
      else
      {
        v15 = 0LL;
      }
      goto LABEL_9;
    }
    v21 = -1LL;
  }
  v22 = v13 + 39;
  if ( v13 + 39 >= v13 )
    goto LABEL_19;
  while ( 1 )
  {
    v22 = v21;
LABEL_19:
    v23 = operator new(v22);
    if ( v23 )
      break;
    v21 = _o__invalid_parameter_noinfo_noreturn(v24);
  }
  v15 = (char *)(((unsigned __int64)v23 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v15 - 1) = v23;
LABEL_9:
  *(_QWORD *)&v15[8 * v6] = *a3;
  v16 = (_BYTE *)a1[1];
  v17 = (_BYTE *)*a1;
  v18 = v15;
  if ( a2 == v16 )
  {
    v19 = v16 - v17;
  }
  else
  {
    try
    {
      memmove_0(v15, v17, a2 - v17);
      v18 = &v15[8 * v6 + 8];
      v19 = a1[1] - (_QWORD)a2;
      v17 = a2;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(v15, 8 * v25);
      throw;
    }
  }
  memmove_0(v18, v17, v19);
  if ( *a1 )
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = v15;
  a1[1] = &v15[8 * v8];
  a1[2] = &v15[v12];
  return *a1 + 8 * v6;
}
