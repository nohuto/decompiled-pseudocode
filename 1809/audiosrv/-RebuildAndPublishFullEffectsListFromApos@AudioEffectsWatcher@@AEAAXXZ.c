/*
 * XREFs of ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAXXZ @ 0x1800BDB20
 * Callers:
 *     ?EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800BD4A0 (-EffectsChangedWaitCallback@AudioEffectsWatcher@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800BD6A0 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x1800B4860 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800BDE54 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos(AudioEffectsWatcher *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // ebp
  _DWORD *v4; // rsi
  _QWORD *v5; // r14
  unsigned int v6; // eax
  void *v7; // r8
  SIZE_T v8; // rax
  unsigned __int64 v9; // kr00_8
  SIZE_T v10; // rsi
  void *v11; // rax
  unsigned __int64 v12; // rax
  char *v13; // r14
  unsigned int v14; // ebp
  _DWORD *v15; // rsi
  LPVOID *v16; // rdi
  __int128 v17; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v18[8]; // [rsp+58h] [rbp-50h] BYREF
  _OWORD v19[2]; // [rsp+60h] [rbp-48h] BYREF

  memset_0(v18, 0, 0x30uLL);
  v17 = *(_OWORD *)((char *)this + 8);
  EtwEventActivityIdControl(4LL, &v17);
  v2 = 0;
  do
  {
    ResetEvent(*((HANDLE *)this + 25));
    AudioEffectsWatcher::ReloadApos(this);
    *((_DWORD *)this + 56) = 0;
    v3 = 0;
    v4 = v19;
    v5 = (_QWORD *)((char *)this + 128);
    do
    {
      CoTaskMemFree(*((LPVOID *)v4 - 1));
      *((_QWORD *)v4 - 1) = 0LL;
      *v4 = 0;
      if ( *v5
        && (*(int (__fastcall **)(_QWORD, _BYTE *, _OWORD *, _QWORD))(*(_QWORD *)*v5 + 24LL))(
             *v5,
             &v18[16 * v3],
             &v19[v3],
             *((_QWORD *)this + 25)) < 0 )
      {
        *v4 = 0;
      }
      *((_DWORD *)this + 56) += *v4;
      ++v3;
      v5 += 4;
      v4 += 4;
    }
    while ( v3 < 3 );
  }
  while ( !WaitForSingleObject(*((HANDLE *)this + 25), 0) );
  v6 = *((_DWORD *)this + 56);
  if ( v6 )
  {
    v7 = (void *)*((_QWORD *)this + 27);
    *((_QWORD *)this + 27) = 0LL;
    v9 = v6;
    v8 = 16LL * v6;
    v10 = v8;
    if ( !is_mul_ok(v9, 0x10uLL) )
      goto LABEL_18;
    v11 = CoTaskMemRealloc(v7, v8);
    *((_QWORD *)this + 27) = v11;
    if ( !v11 )
      goto LABEL_18;
    v12 = CTCoAllocPolicy::_CoTaskMemSize(v11);
    if ( v12 > v10 )
      memset_0((void *)(v10 + *((_QWORD *)this + 27)), 0, v12 - v10);
  }
  v13 = (char *)*((_QWORD *)this + 27);
  v14 = 0;
  v15 = v19;
  do
  {
    if ( *v15 )
    {
      memcpy_0(v13, *((const void **)v15 - 1), 16LL * (unsigned int)*v15);
      v13 += 16 * (unsigned int)*v15;
    }
    ++v14;
    v15 += 4;
  }
  while ( v14 < 3 );
  RtlPublishWnfStateData(
    *(_QWORD *)((char *)this + 92),
    0LL,
    *((_QWORD *)this + 27),
    (unsigned int)(16 * *((_DWORD *)this + 56)),
    0LL);
LABEL_18:
  v16 = (LPVOID *)v18;
  do
  {
    CoTaskMemFree(*v16);
    ++v2;
    v16 += 2;
  }
  while ( v2 < 3 );
  EtwEventActivityIdControl(4LL, &v17);
}
