/*
 * XREFs of BgpConsoleInitialize @ 0x140952730
 * Callers:
 *     <none>
 * Callees:
 *     BgpGetResolution @ 0x14013B9C0 (BgpGetResolution.c)
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     BgpConsoleSetPointSize @ 0x1401869BC (BgpConsoleSetPointSize.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     BgpFoGetFontHandle @ 0x1409512A4 (BgpFoGetFontHandle.c)
 *     BgpDisplayCharacterGetContext @ 0x140952948 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleClearScreenEx @ 0x140954578 (BgpConsoleClearScreenEx.c)
 *     BgpConsoleGetFontName @ 0x1409FC894 (BgpConsoleGetFontName.c)
 */

__int64 __fastcall BgpConsoleInitialize(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *Memory; // rax
  _DWORD *Resolution; // rax
  __int64 v8; // r9
  int FontHandle; // eax
  unsigned int *v10; // rbx
  int v11; // edi
  _DWORD *v12; // rdi
  __int64 Context; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rcx
  unsigned int i; // r9d
  wchar_t *Str2[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v23[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v24; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-10h]
  int v26; // [rsp+54h] [rbp-Ch]

  BgpFwAcquireLock();
  Memory = (_DWORD *)BgpFwAllocateMemory(0x5E10uLL);
  qword_1404C7598 = (__int64)Memory;
  if ( !Memory )
  {
    v11 = -1073741801;
    goto LABEL_12;
  }
  *Memory = 80;
  Memory[1] = 25;
  Memory[2] |= (unsigned __int16)a1;
  Memory[3] = a2;
  Memory[4] = a3;
  Resolution = BgpGetResolution(Str2);
  *(_QWORD *)(v8 + 20) = *(_QWORD *)Resolution;
  LODWORD(Resolution) = Resolution[2];
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 28) = (_DWORD)Resolution;
  *(_DWORD *)(v8 + 32) = 15;
  *(_DWORD *)(v8 + 48) = 12;
  *(_DWORD *)(v8 + 52) = 22;
  memset((void *)(v8 + 80), 0, 0x5DC0uLL);
  v23[0] = a3;
  v23[1] = a2;
  v26 = ((unsigned __int8)~(_BYTE)a1 >> 1) & 1;
  BgpConsoleGetFontName((unsigned int)dword_140406C38, Str2);
  FontHandle = BgpFoGetFontHandle(Str2[0], &v24);
  v10 = (unsigned int *)qword_1404C7598;
  v11 = FontHandle;
  if ( FontHandle >= 0 )
  {
    v11 = BgpConsoleSetPointSize(
            *(_DWORD *)(qword_1404C7598 + 4),
            *(_DWORD *)qword_1404C7598,
            *(_DWORD *)(qword_1404C7598 + 24),
            *(_DWORD *)(qword_1404C7598 + 20),
            (__int64)v23,
            (__int64)Str2);
    if ( v11 >= 0 )
    {
      v12 = v10 + 12;
      v10[8] = v25;
      *((wchar_t **)v10 + 6) = Str2[0];
      Context = BgpDisplayCharacterGetContext(v23, v10 + 12, ~(unsigned __int8)(a1 >> 1) & 2 | 1u);
      v10 = (unsigned int *)qword_1404C7598;
      *(_QWORD *)(qword_1404C7598 + 40) = Context;
      if ( Context )
      {
        v14 = 0LL;
        v15 = *v10;
        v16 = v10[1];
        v10[15] = (v10[5] - (_DWORD)v15 * *v12) >> 1;
        v17 = v12[1] * v16;
        v18 = v10[6];
        v10[19] = 0;
        v10[17] = 0;
        v10[18] = 0;
        v19 = (v18 - v17) >> 1;
        v10[16] = v19;
        if ( (_DWORD)v15 )
        {
          do
          {
            for ( i = 0; i < v10[1]; v10[v15 + 20] = a2 )
            {
              v19 = 25LL * (unsigned int)v14 + i++;
              v15 = 3 * v19;
              LOWORD(v10[v15 + 22]) = 32;
              v10[3 * v19 + 21] = a3;
            }
            v14 = (unsigned int)(v14 + 1);
          }
          while ( (unsigned int)v14 < *v10 );
        }
        if ( (a1 & 1) != 0 )
          BgpConsoleClearScreenEx(v19, v15, v14);
        v11 = 0;
        goto LABEL_12;
      }
      v11 = -1073741823;
    }
  }
  if ( v10 )
  {
    BgpFwFreeMemory((__int64)v10);
    qword_1404C7598 = 0LL;
  }
LABEL_12:
  BgpFwReleaseLock();
  return (unsigned int)v11;
}
