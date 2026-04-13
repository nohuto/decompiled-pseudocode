/*
 * XREFs of ?wil_details_StagingConfig_PrepareSessionChangeUpdate@@YAXPEAUwil_details_StagingConfig@@@Z @ 0x180005AA8
 * Callers:
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x180005C1C (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800C7153 (memmove_0.c)
 */

void __fastcall wil_details_StagingConfig_PrepareSessionChangeUpdate(struct wil_details_StagingConfig *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  unsigned int v4; // r8d
  unsigned int v5; // edx
  __int16 v6; // r9
  unsigned int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // r8d
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax

  v1 = *((_QWORD *)a1 + 3);
  v2 = *((_QWORD *)a1 + 4);
  v4 = 0;
  LOWORD(v5) = *(_WORD *)(v1 + 4);
  if ( (_WORD)v5 )
  {
    v6 = *(_WORD *)(v1 + 4);
    do
    {
      LOWORD(v5) = v6;
      if ( (*(_BYTE *)(v2 + 12LL * v4 + 4) & 1) != 0 )
      {
        v7 = 0;
        if ( v6 )
        {
          do
          {
            if ( v7 != v4 && *(_DWORD *)(v2 + 12LL * v7) == *(_DWORD *)(v2 + 12LL * v4) )
              *(_DWORD *)(v2 + 12LL * v7) = 0;
            v5 = *(unsigned __int16 *)(v1 + 4);
            ++v7;
          }
          while ( v7 < v5 );
        }
      }
      ++v4;
      v6 = v5;
    }
    while ( v4 < (unsigned __int16)v5 );
  }
  v8 = 0;
  v9 = 0;
  if ( (_WORD)v5 )
  {
    do
    {
      if ( *(_DWORD *)(v2 + 12LL * v9) )
      {
        v10 = *(_DWORD *)(v2 + 12LL * v9 + 4);
        if ( (v10 & 0x300) != 0
          || (v10 & 0xC00) != 0
          || (v10 & 0x3000) != 0
          || (v10 & 0x3F000000) != 0
          || (v10 & 2) != 0 )
        {
          if ( v8 != v9 )
          {
            v11 = 3LL * v8;
            *(_QWORD *)(v2 + 4 * v11) = *(_QWORD *)(v2 + 12LL * v9);
            *(_DWORD *)(v2 + 4 * v11 + 8) = *(_DWORD *)(v2 + 12LL * v9 + 8);
          }
          *(_DWORD *)(v2 + 12LL * v8++ + 4) &= ~1u;
        }
      }
      v5 = *(unsigned __int16 *)(v1 + 4);
      ++v9;
    }
    while ( v9 < v5 );
  }
  if ( v8 != (unsigned __int16)v5 )
  {
    memmove_0(
      (void *)(v2 + 12LL * v8),
      (const void *)(v2 + 12LL * (unsigned __int16)v5),
      16LL * *(unsigned __int16 *)(v1 + 6));
    *((_QWORD *)a1 + 5) = v2 + 16LL * v8;
    v12 = *(unsigned __int16 *)(v1 + 4) - v8;
    *((_DWORD *)a1 + 4) = 1;
    *((_QWORD *)a1 + 8) -= 12 * v12;
    *(_WORD *)(v1 + 4) = v8;
  }
  *(_DWORD *)(v1 + 12) = *(_DWORD *)(v1 + 8);
}
