/*
 * XREFs of NVMeLogTelemetry @ 0x1C000C25C
 * Callers:
 *     NVMeLogTelemetryControllerInfo @ 0x1C000C56C (NVMeLogTelemetryControllerInfo.c)
 *     NVMeLogTelemetryWaitForCmdComplete @ 0x1C0015C10 (NVMeLogTelemetryWaitForCmdComplete.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00052B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0005640 (memmove.c)
 *     memset @ 0x1C0005980 (memset.c)
 */

__int64 __fastcall NVMeLogTelemetry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *Src,
        int a6,
        int a7,
        int a8,
        int a9,
        _BYTE *a10,
        __int64 a11,
        _BYTE *a12,
        __int64 a13,
        _BYTE *a14,
        __int64 a15,
        _BYTE *a16,
        __int64 a17,
        _BYTE *a18,
        __int64 a19,
        _BYTE *a20,
        __int64 a21,
        _BYTE *a22,
        __int64 a23,
        _BYTE *a24,
        __int64 a25)
{
  unsigned int v25; // ecx
  _BYTE *v26; // rax
  unsigned int v27; // ebx
  size_t v28; // r8
  unsigned int v29; // ecx
  _BYTE *v30; // rax
  size_t v31; // r8
  unsigned int v32; // ecx
  _BYTE *v33; // rax
  size_t v34; // r8
  unsigned int v35; // ecx
  _BYTE *v36; // rax
  size_t v37; // r8
  unsigned int v38; // ecx
  _BYTE *v39; // rax
  size_t v40; // r8
  unsigned int v41; // ecx
  _BYTE *v42; // rax
  size_t v43; // r8
  unsigned int v44; // ecx
  _BYTE *v45; // rax
  size_t v46; // r8
  unsigned int v47; // ecx
  _BYTE *v48; // rax
  size_t v49; // r8
  unsigned int v50; // eax
  _BYTE *v51; // rcx
  _QWORD v55[47]; // [rsp+68h] [rbp-98h] BYREF

  memset(v55, 0, sizeof(v55));
  v25 = 0;
  v26 = Src;
  v27 = 32;
  do
  {
    if ( !*v26 )
      break;
    ++v25;
    ++v26;
  }
  while ( v25 < 0x20 );
  v28 = 32LL;
  if ( v25 < 0x20 )
    v28 = v25;
  memmove(v55, Src, v28);
  v55[4] = 1LL;
  if ( a10 )
  {
    v29 = 0;
    v30 = a10;
    do
    {
      if ( !*v30 )
        break;
      ++v29;
      ++v30;
    }
    while ( v29 < 0x20 );
    v31 = 32LL;
    if ( v29 < 0x20 )
      v31 = v29;
    memmove(&v55[7], a10, v31);
    v55[11] = a11;
  }
  if ( a12 )
  {
    v32 = 0;
    v33 = a12;
    do
    {
      if ( !*v33 )
        break;
      ++v32;
      ++v33;
    }
    while ( v32 < 0x20 );
    v34 = 32LL;
    if ( v32 < 0x20 )
      v34 = v32;
    memmove(&v55[12], a12, v34);
    v55[16] = a13;
  }
  if ( a14 )
  {
    v35 = 0;
    v36 = a14;
    do
    {
      if ( !*v36 )
        break;
      ++v35;
      ++v36;
    }
    while ( v35 < 0x20 );
    v37 = 32LL;
    if ( v35 < 0x20 )
      v37 = v35;
    memmove(&v55[17], a14, v37);
    v55[21] = a15;
  }
  if ( a16 )
  {
    v38 = 0;
    v39 = a16;
    do
    {
      if ( !*v39 )
        break;
      ++v38;
      ++v39;
    }
    while ( v38 < 0x20 );
    v40 = 32LL;
    if ( v38 < 0x20 )
      v40 = v38;
    memmove(&v55[22], a16, v40);
    v55[26] = a17;
  }
  if ( a18 )
  {
    v41 = 0;
    v42 = a18;
    do
    {
      if ( !*v42 )
        break;
      ++v41;
      ++v42;
    }
    while ( v41 < 0x20 );
    v43 = 32LL;
    if ( v41 < 0x20 )
      v43 = v41;
    memmove(&v55[27], a18, v43);
    v55[31] = a19;
  }
  if ( a20 )
  {
    v44 = 0;
    v45 = a20;
    do
    {
      if ( !*v45 )
        break;
      ++v44;
      ++v45;
    }
    while ( v44 < 0x20 );
    v46 = 32LL;
    if ( v44 < 0x20 )
      v46 = v44;
    memmove(&v55[32], a20, v46);
    v55[36] = a21;
  }
  if ( a22 )
  {
    v47 = 0;
    v48 = a22;
    do
    {
      if ( !*v48 )
        break;
      ++v47;
      ++v48;
    }
    while ( v47 < 0x20 );
    v49 = 32LL;
    if ( v47 < 0x20 )
      v49 = v47;
    memmove(&v55[37], a22, v49);
    v55[41] = a23;
  }
  if ( a24 )
  {
    v50 = 0;
    v51 = a24;
    do
    {
      if ( !*v51 )
        break;
      ++v50;
      ++v51;
    }
    while ( v50 < 0x20 );
    if ( v50 < 0x20 )
      v27 = v50;
    memmove(&v55[42], a24, v27);
    v55[46] = a25;
  }
  return StorPortExtendedFunction(96LL, a1, a2);
}
