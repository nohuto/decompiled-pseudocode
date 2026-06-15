/*
 * XREFs of ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18000CFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18000D080 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::SetSessionVolume(
        CPerStreamVolumeAudioStream *this,
        float a2,
        unsigned int a3,
        float *const a4,
        __int64 a5,
        bool a6)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // ebx
  float v14; // xmm1_4
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = *((_DWORD *)this + 21);
  v7 = 0LL;
  if ( v6 )
  {
    v8 = *((_QWORD *)this + 53);
    do
    {
      *(float *)(v8 + 4 * v7) = a2;
      v7 = (unsigned int)(v7 + 1);
      v6 = *((_DWORD *)this + 21);
    }
    while ( (unsigned int)v7 < v6 );
  }
  if ( a3 < v6 )
  {
    v14 = 0.0;
    if ( a3 )
    {
      v15 = a3;
      do
      {
        if ( v14 <= *a4 )
          v14 = *a4;
        ++a4;
        --v15;
      }
      while ( v15 );
      v6 = *((_DWORD *)this + 21);
    }
    v16 = 0LL;
    if ( v6 )
    {
      v17 = *((_QWORD *)this + 53);
      do
      {
        *(float *)(v17 + 4 * v16) = v14 * *(float *)(v17 + 4 * v16);
        v16 = (unsigned int)(v16 + 1);
      }
      while ( (unsigned int)v16 < *((_DWORD *)this + 21) );
    }
  }
  else
  {
    v9 = 0LL;
    if ( v6 )
    {
      v10 = *((_QWORD *)this + 53);
      do
      {
        *(float *)(v10 + 4 * v9) = a4[v9] * *(float *)(v10 + 4 * v9);
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *((_DWORD *)this + 21) );
    }
  }
  *((_QWORD *)this + 54) = a5;
  if ( !a6 )
    return 0LL;
  v11 = CAudioStream::RecalculateVolume(this, 0, 0LL);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x697,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v11,
    v18);
  return v12;
}
