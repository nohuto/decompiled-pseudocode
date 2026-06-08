/*
 * XREFs of DeregisterKernelIdleDomains @ 0x1C0029228
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0007F30 (RegisterKernelIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0002520 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     UpdateKernelIdleDomains @ 0x1C00294D4 (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall DeregisterKernelIdleDomains(__int64 a1)
{
  unsigned int *v2; // rdx
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  __int64 v5; // rax
  unsigned int *v6; // r15
  __int64 v7; // rdx
  unsigned int *v8; // rcx
  char v9; // dl
  _QWORD *v10; // rsi
  _QWORD *v11; // r8
  unsigned __int64 v12; // r10
  unsigned int *v13; // r9
  _QWORD *i; // rax
  unsigned int *v15; // rcx
  bool v16; // bl
  int v17; // edi
  int v18; // ebx
  __int64 v19; // rcx
  unsigned int **v20; // rax
  _QWORD *v21; // rax
  void **v22; // rcx
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int j; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v29[3]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v30[176]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v31[176]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v31, 0, 0xA8uLL);
  memset(v29, 0, sizeof(v29));
  memset(v30, 0, 0xA8uLL);
  KeInitializeAffinityEx(v30);
  v2 = *(unsigned int **)(a1 + 712);
  if ( v2 )
  {
    v4 = 0;
    j = 0;
    if ( *v2 )
    {
      v5 = 0LL;
      do
      {
        v6 = &v2[8 * v5 + 2];
        v7 = *((_QWORD *)v6 + 1);
        if ( v7 )
        {
          KeCopyAffinityEx(v31, v7 + 48);
          v8 = *(unsigned int **)(a1 + 712);
          v9 = 1;
          v10 = (_QWORD *)*((_QWORD *)v6 + 1);
          v11 = v10 + 2;
          v12 = (unsigned __int64)&v8[8 * *v8 + 2];
          v13 = v8 + 2;
          for ( i = (_QWORD *)v10[2]; i != v11; i = (_QWORD *)*i )
          {
            v15 = (unsigned int *)(i - 2);
            if ( i - 2 != (_QWORD *)v6 && v15 >= v13 && (unsigned __int64)v15 < v12 )
              v9 = 0;
          }
          v16 = 0;
          if ( v9 )
          {
            v17 = *((_DWORD *)v10 + 8);
            v18 = *((_DWORD *)v10 + 11);
            KeRemoveProcessorAffinityEx(v10 + 6, *(unsigned int *)(a1 + 56), v11, v13);
            --*((_DWORD *)v10 + 8);
            v16 = v17 == v18;
          }
          v19 = *((_QWORD *)v6 + 2);
          if ( *(unsigned int **)(v19 + 8) != v6 + 4 || (v20 = (unsigned int **)*((_QWORD *)v6 + 3), *v20 != v6 + 4) )
LABEL_26:
            __fastfail(3u);
          *v20 = (unsigned int *)v19;
          *(_QWORD *)(v19 + 8) = v20;
          if ( v20 == (unsigned int **)v19 )
          {
            v21 = (_QWORD *)*v10;
            if ( *(_QWORD **)(*v10 + 8LL) != v10 )
              goto LABEL_26;
            v22 = (void **)v10[1];
            if ( *v22 != v10 )
              goto LABEL_26;
            *v22 = v21;
            v21[1] = v22;
            ExFreePoolWithTag(v10, 0);
          }
          *((_QWORD *)v6 + 1) = 0LL;
          if ( v16 )
            KeOrAffinityEx(v31, v30, v30);
          v4 = j;
        }
        v2 = *(unsigned int **)(a1 + 712);
        j = ++v4;
        v5 = v4;
      }
      while ( v4 < *v2 );
    }
    v3 = 0;
    KeInitializeEnumerationContext(v29, v30);
    while ( !(unsigned int)KeEnumerateNextProcessor(&j, v29) )
    {
      DevExtFromIndex = GetDevExtFromIndex(j);
      updated = UpdateKernelIdleDomains(DevExtFromIndex);
      if ( updated < 0 )
        v3 = updated;
    }
    v25 = *(_DWORD *)(*(_QWORD *)(a1 + 696) + 56LL);
    v26 = 0LL;
    for ( j = 0; (unsigned int)v26 < v25; j = v26 )
    {
      *(_QWORD *)(88 * v26 + *(_QWORD *)(a1 + 696) + 136) = 0LL;
      v26 = j + 1;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 712), 0x72637250u);
    *(_QWORD *)(a1 + 712) = 0LL;
  }
  else
  {
    return 0;
  }
  return v3;
}
