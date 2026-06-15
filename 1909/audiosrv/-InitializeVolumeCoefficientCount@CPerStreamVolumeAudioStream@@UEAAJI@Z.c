/*
 * XREFs of ?InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z @ 0x1800422F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::InitializeVolumeCoefficientCount(
        CPerStreamVolumeAudioStream *this,
        unsigned int a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rax
  void *v5; // rax
  void **v6; // rdi
  void *v7; // rcx
  _DWORD *v8; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v10; // rax
  void *v11; // rax
  void **v12; // rdi
  void *v13; // rcx
  unsigned __int64 v14; // rax
  void *v15; // rax
  void **v16; // rsi
  void *v17; // rcx
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  __int64 v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v23; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  if ( *((_DWORD *)this + 21) == a2 )
    goto LABEL_11;
  v4 = 4LL * a2;
  if ( !is_mul_ok(a2, 4uLL) )
    v4 = -1LL;
  v5 = operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (void **)((char *)this + 424);
  if ( (char *)this + 424 == &v23 )
  {
    if ( !v5 )
      goto LABEL_6;
    v7 = v5;
LABEL_29:
    operator delete(v7);
    goto LABEL_6;
  }
  v7 = *v6;
  *v6 = v5;
  if ( v7 )
    goto LABEL_29;
LABEL_6:
  v8 = *v6;
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  if ( (_DWORD)v3 )
  {
    for ( i = v3; i; --i )
      *v8++ = 1065353216;
  }
LABEL_11:
  if ( *((_DWORD *)this + 21) == (_DWORD)v3 )
    return 0LL;
  *((_DWORD *)this + 21) = v3;
  v10 = 4 * v3;
  if ( !is_mul_ok(v3, 4uLL) )
    v10 = -1LL;
  v11 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  v12 = (void **)((char *)this + 104);
  if ( (char *)this + 104 == &v23 )
  {
    if ( !v11 )
      goto LABEL_16;
    v13 = v11;
  }
  else
  {
    v13 = *v12;
    *v12 = v11;
    if ( !v13 )
      goto LABEL_16;
  }
  operator delete(v13);
LABEL_16:
  if ( *v12 )
  {
    v14 = 4LL * *((unsigned int *)this + 21);
    if ( !is_mul_ok(*((unsigned int *)this + 21), 4uLL) )
      v14 = -1LL;
    v15 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    v16 = (void **)((char *)this + 112);
    if ( (char *)this + 112 == &v23 )
    {
      if ( !v15 )
        goto LABEL_21;
      v17 = v15;
    }
    else
    {
      v17 = *v16;
      *v16 = v15;
      if ( !v17 )
      {
LABEL_21:
        if ( *v16 )
        {
          v18 = 0LL;
          if ( *((_DWORD *)this + 21) )
          {
            v19 = *v12;
            do
            {
              v19[v18] = 1065353216;
              v18 = (unsigned int)(v18 + 1);
            }
            while ( (unsigned int)v18 < *((_DWORD *)this + 21) );
          }
          return 0LL;
        }
        v21 = 216LL;
        goto LABEL_38;
      }
    }
    operator delete(v17);
    goto LABEL_21;
  }
  v21 = 214LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)0x8007000ELL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5FF,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
