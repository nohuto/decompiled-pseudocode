/*
 * XREFs of GetLongPathNameW @ 0x14000F388
 * Callers:
 *     GetFinalPathNameByHandleW @ 0x14000E548 (GetFinalPathNameByHandleW.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     GetFileAttributesW @ 0x14000EA04 (GetFileAttributesW.c)
 *     SetErrorMode @ 0x14000F0C0 (SetErrorMode.c)
 *     FindLFNorSFN_U @ 0x14000F27C (FindLFNorSFN_U.c)
 *     SkipPathTypeIndicator_U @ 0x14000F810 (SkipPathTypeIndicator_U.c)
 *     FindClose @ 0x14000FA40 (FindClose.c)
 *     FindFirstFileExW @ 0x14000FB4C (FindFirstFileExW.c)
 *     memmove_0 @ 0x1400101E3 (memmove_0.c)
 */

__int64 __fastcall GetLongPathNameW(WCHAR *Name, WCHAR *a2, unsigned int a3)
{
  unsigned int v6; // edi
  __int16 *v7; // r15
  int v9; // esi
  __int16 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  SIZE_T v13; // rdi
  __int16 *Heap; // rax
  char *v15; // rcx
  __int16 *v16; // r12
  char *v17; // r13
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int v21; // edi
  size_t v22; // rbx
  __int16 v23; // bx
  void *FirstFile; // rax
  __int64 v25; // rax
  _WORD *v26; // rcx
  size_t v27; // rbx
  __int64 v28; // rsi
  unsigned int v29; // [rsp+30h] [rbp-2D8h]
  int v30; // [rsp+34h] [rbp-2D4h]
  WCHAR *BaseAddress; // [rsp+40h] [rbp-2C8h]
  void *Src; // [rsp+48h] [rbp-2C0h] BYREF
  PVOID v34; // [rsp+50h] [rbp-2B8h]
  char *v35; // [rsp+58h] [rbp-2B0h] BYREF
  WCHAR *v36; // [rsp+60h] [rbp-2A8h]
  __int16 *v37; // [rsp+68h] [rbp-2A0h]
  _WORD v38[274]; // [rsp+9Ch] [rbp-26Ch] BYREF

  v6 = 0;
  v29 = 0;
  Src = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v7 = 0LL;
  BaseAddress = 0LL;
  if ( !Name )
  {
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
  v9 = SetErrorMode(32769);
  v30 = v9;
  if ( (unsigned int)GetFileAttributesW(Name) != -1 )
  {
    v10 = (__int16 *)SkipPathTypeIndicator_U(Name);
    if ( !v10 || !*v10 || !(unsigned int)FindLFNorSFN_U(v10, (__int16 **)&Src, (__int16 **)&v35) )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( Name[v28] );
      v6 = v28;
      v29 = v28;
      if ( a3 > (unsigned int)v28 && a2 )
      {
        if ( a2 != Name )
          memmove_0(a2, Name, 2LL * (unsigned int)(v28 + 1));
      }
      else
      {
        v6 = v28 + 1;
        v29 = v28 + 1;
      }
      goto LABEL_53;
    }
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( Name[v12] );
    v13 = 2LL * (unsigned int)(v12 + 1);
    Heap = (__int16 *)RtlAllocateHeap(
                        *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                        KernelBaseGlobalData + 0x200000,
                        v13);
    v7 = Heap;
    BaseAddress = (WCHAR *)Heap;
    if ( !Heap )
    {
      RtlSetLastWin32Error(8u);
      v6 = 0;
LABEL_53:
      v9 = v30;
      goto LABEL_54;
    }
    memmove_0(Heap, Name, v13);
    v15 = (char *)&v7[((_BYTE *)Src - (_BYTE *)Name) >> 1];
    Src = v15;
    v16 = &v7[(v35 - (char *)Name) >> 1];
    v35 = (char *)v16;
    v17 = (char *)a2;
    v36 = a2;
    v18 = a3;
    if ( !a3 || !a2 )
      goto LABEL_21;
    if ( a2 >= Name )
    {
      if ( a2 < &Name[v13 / 2] )
      {
        v19 = a3;
LABEL_18:
        v34 = RtlAllocateHeap(
                *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                KernelBaseGlobalData + 0x200000,
                2 * v19);
        if ( !v34 )
        {
          RtlSetLastWin32Error(8u);
          v6 = 0;
LABEL_52:
          v7 = (__int16 *)BaseAddress;
          goto LABEL_53;
        }
        v17 = (char *)v34;
        v36 = (WCHAR *)v34;
        v16 = (__int16 *)v35;
        v15 = (char *)Src;
        v7 = (__int16 *)BaseAddress;
        v18 = a3;
LABEL_21:
        v37 = v7;
        v6 = 0;
        while ( 1 )
        {
          v20 = (v15 - (char *)v7) >> 1;
          v21 = v20 + v6;
          if ( (_DWORD)v20 && v18 > v21 )
          {
            v22 = 2LL * (unsigned int)v20;
            memmove_0(v17, v7, v22);
            v17 += v22;
            v36 = (WCHAR *)v17;
          }
          v23 = *v16;
          *v16 = 0;
          FirstFile = (void *)FindFirstFileExW(BaseAddress);
          *v16 = v23;
          if ( FirstFile == (void *)-1LL )
            break;
          FindClose(FirstFile);
          v25 = -1LL;
          do
            ++v25;
          while ( v38[v25] );
          if ( (_DWORD)v25 )
          {
            v26 = v38;
            Src = v38;
          }
          else
          {
            v26 = Src;
            v25 = ((char *)v16 - (_BYTE *)Src) >> 1;
          }
          v6 = v25 + v21;
          v29 = v6;
          if ( a3 > v6 && a2 )
          {
            v27 = 2LL * (unsigned int)v25;
            memmove_0(v17, v26, v27);
            v17 += v27;
            v36 = (WCHAR *)v17;
          }
          v7 = v16;
          v37 = v16;
          if ( !*v16 || !(unsigned int)FindLFNorSFN_U(v16, (__int16 **)&Src, (__int16 **)&v35) )
            goto LABEL_38;
          v16 = (__int16 *)v35;
          v15 = (char *)Src;
          v18 = a3;
        }
        v6 = 0;
        v29 = 0;
LABEL_38:
        if ( v6 )
        {
          do
            ++v11;
          while ( v7[v11] );
          v6 += v11;
          v29 = v6;
          if ( a3 > v6 && a2 )
          {
            memmove_0(v17, v7, 2LL * (unsigned int)(v11 + 1));
            if ( v34 )
              memmove_0(a2, v34, 2LL * (v6 + 1));
          }
          else
          {
            v29 = ++v6;
          }
        }
        goto LABEL_52;
      }
      if ( a2 >= Name )
        goto LABEL_21;
    }
    v19 = a3;
    if ( &a2[a3] < Name )
      goto LABEL_21;
    goto LABEL_18;
  }
LABEL_54:
  if ( v7 )
  {
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    v6 = v29;
  }
  if ( v34 )
  {
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v34);
    v6 = v29;
  }
  SetErrorMode(v9);
  return v6;
}
