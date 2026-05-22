/*
 * XREFs of ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x18002C624
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18002EA3C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_StagingConfig_QueryFeatureState(
        struct wil_details_StagingConfig *a1,
        struct wil_FeatureState *a2,
        int a3,
        int a4)
{
  __int64 v4; // r15
  int v5; // r10d
  __int64 v6; // r11
  int v8; // edi
  int v11; // esi
  unsigned int v12; // edx
  __int64 result; // rax
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // r9d
  int v18; // r8d
  int v19; // edx
  unsigned int v20; // edx
  _DWORD *v21; // rcx
  __int64 v22; // [rsp+0h] [rbp-38h]
  int v23; // [rsp+8h] [rbp-30h]

  v4 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = *((_QWORD *)a1 + 4);
  v8 = v23;
  v11 = 0;
  v12 = 0;
  if ( !*(_WORD *)(v4 + 4) )
  {
LABEL_9:
    result = 0LL;
    if ( v11 )
      goto LABEL_10;
    goto LABEL_34;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v6 + 12LL * v12) == a3 )
    {
      if ( !a4 || !*((_DWORD *)a1 + 12) )
      {
        v11 = 1;
        v8 = *(_DWORD *)(v6 + 12LL * v12 + 8);
        v22 = *(_QWORD *)(v6 + 12LL * v12);
        if ( (*(_BYTE *)(v6 + 12LL * v12 + 4) & 1) != 0 )
          goto LABEL_9;
        goto LABEL_8;
      }
      if ( (*(_BYTE *)(v6 + 12LL * v12 + 4) & 1) == 0 )
        break;
    }
LABEL_8:
    if ( ++v12 >= *(unsigned __int16 *)(v4 + 4) )
      goto LABEL_9;
  }
  v8 = *(_DWORD *)(v6 + 12LL * v12 + 8);
  v22 = *(_QWORD *)(v6 + 12LL * v12);
LABEL_10:
  if ( !a4 || (v14 = 12LL, !*((_DWORD *)a1 + 12)) )
    v14 = 8LL;
  v15 = *(_DWORD *)(v14 + v4);
  if ( (v15 & 4) != 0 )
    v16 = HIDWORD(v22) & 0xFFFFCFFF;
  else
    v16 = HIDWORD(v22);
  if ( (v15 & 2) != 0 )
    v16 &= 0xFFFFF3FF;
  if ( (v15 & 1) != 0 )
    v16 &= 0xFFFFFCFF;
  if ( (v15 & 8) != 0 )
  {
    v16 &= 0xC0FFFFFF;
    v8 = 0;
  }
  if ( (_DWORD)v22
    && (((BYTE1(v16) | (unsigned __int8)((v16 >> 10) | (v16 >> 12))) & 3) != 0
     || (v16 & 0x3F000000) != 0
     || (v16 & 2) != 0) )
  {
    *((_DWORD *)a2 + 3) = v8;
    *((_DWORD *)a2 + 2) = v16 >> 30;
    *((_BYTE *)a2 + 4) = HIBYTE(v16) & 0x3F;
    *((_DWORD *)a2 + 5) = (v16 >> 1) & 1;
    v17 = (v16 >> 12) & 3;
    if ( v17 )
    {
      *(_DWORD *)a2 = v17;
    }
    else
    {
      v18 = (v16 >> 10) & 3;
      if ( v18 )
      {
        *(_DWORD *)a2 = v18;
      }
      else
      {
        v19 = (v16 >> 8) & 3;
        if ( v19 )
          *(_DWORD *)a2 = v19;
      }
    }
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
LABEL_34:
  v20 = 0;
  v21 = (_DWORD *)*((_QWORD *)a1 + 5);
  if ( *(_WORD *)(v4 + 6) )
  {
    while ( *v21 != a3 )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)(v4 + 6) )
        goto LABEL_39;
    }
    v5 = 1;
  }
LABEL_39:
  *((_DWORD *)a2 + 4) = v5;
  return result;
}
