/*
 * XREFs of ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C0147148
 * Callers:
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 * Callees:
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0108F18 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0108F98 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C014785C (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 */

__int64 __fastcall cjGetBrushOrPen(HBRUSH a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v5; // edi
  struct BRUSH *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v10; // ebp
  int v11; // r15d
  float *v12; // rdi
  int *v13; // r14
  __int64 v14; // rax
  struct BRUSH *v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v15, a1);
  v6 = v15[0];
  if ( !v15[0] )
  {
    EngSetLastError(0x57u);
    goto LABEL_10;
  }
  v7 = *((_DWORD *)v15[0] + 10);
  if ( (v7 & 0x800) != 0 )
  {
    bSyncBrushObj(v15[0]);
    if ( a3 )
    {
      if ( a2 < 0x10 )
        goto LABEL_10;
      if ( a2 == 32 && *((_DWORD *)v6 + 44) == 5 )
      {
        a3[1] = 0LL;
        a3[2] = 0LL;
        *((_DWORD *)a3 + 6) = 0;
        v5 = 32;
        *a3 = 5LL;
        goto LABEL_10;
      }
      *(_DWORD *)a3 = *((_DWORD *)v6 + 44);
      *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 42);
      *((_DWORD *)a3 + 2) = 0;
      *((_DWORD *)a3 + 3) = *((_DWORD *)v6 + 19);
    }
    goto LABEL_9;
  }
  if ( (v7 & 0x400) != 0 )
  {
    if ( (*((_BYTE *)v15[0] + 176) & 0xF) == 7 )
      v10 = *((_DWORD *)v15[0] + 45);
    else
      v10 = 0;
    v11 = 4 * v10 + 28;
    if ( a3 )
    {
      if ( (int)a2 < v11 )
        goto LABEL_10;
      *(_DWORD *)a3 = *((_DWORD *)v15[0] + 44);
      *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 42);
      *((_DWORD *)a3 + 6) = v10;
      if ( v10 )
      {
        v12 = (float *)*((_QWORD *)v6 + 19);
        v13 = (int *)a3 + 7;
        do
        {
          if ( (*((_DWORD *)v6 + 44) & 0xF0000) != 0 )
            bFToL(*v12, v13, 6u);
          else
            *v13 = *(_DWORD *)v12;
          ++v13;
          ++v12;
          --v10;
        }
        while ( v10 );
      }
      *((_DWORD *)a3 + 2) = *((_DWORD *)v6 + 47);
      *((_DWORD *)a3 + 3) = *((_DWORD *)v6 + 19);
      a3[2] = *((_QWORD *)v6 + 20);
    }
    v5 = v11;
    goto LABEL_10;
  }
  if ( !a3 )
    goto LABEL_9;
  if ( a2 >= 0x10 )
  {
    bSyncBrushObj(v15[0]);
    v8 = *((_DWORD *)v6 + 10);
    if ( (v8 & 0x10) != 0 )
    {
      *(_DWORD *)a3 = 0;
      *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 19);
LABEL_8:
      a3[1] = 0LL;
LABEL_9:
      v5 = 16;
      goto LABEL_10;
    }
    if ( (v8 & 0x40) != 0 )
    {
      *a3 = 3LL;
    }
    else
    {
      if ( (v8 & 0x20) != 0 )
      {
        *(_DWORD *)a3 = 2;
        *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 19);
        v14 = *((unsigned int *)v6 + 20);
LABEL_40:
        a3[1] = v14;
        goto LABEL_9;
      }
      if ( (v8 & 0x100) != 0 )
      {
        *a3 = 1LL;
        goto LABEL_8;
      }
      if ( (v8 & 0x80u) == 0 )
        goto LABEL_9;
      *(_DWORD *)a3 = 5;
      *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 19);
    }
    v14 = *((_QWORD *)v6 + 4);
    goto LABEL_40;
  }
LABEL_10:
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v15);
  return v5;
}
