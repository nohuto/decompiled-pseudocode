/*
 * XREFs of ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C013DB88
 * Callers:
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 * Callees:
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0101B78 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0101C00 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C013F0A0 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 */

__int64 __fastcall cjGetBrushOrPen(HBRUSH a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v5; // edi
  struct BRUSH *v6; // rsi
  int v7; // eax
  struct BRUSH *v8; // rcx
  int v9; // eax
  int v11; // ebp
  int v12; // r15d
  struct BRUSH *v13; // rcx
  float *v14; // rdi
  int *v15; // r14
  __int64 v16; // rax
  struct BRUSH *v17[6]; // [rsp+20h] [rbp-48h] BYREF

  v5 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v17, a1);
  v6 = v17[0];
  if ( !v17[0] )
  {
    EngSetLastError(0x57u);
    goto LABEL_10;
  }
  v7 = *((_DWORD *)v17[0] + 10);
  if ( (v7 & 0x800) != 0 )
  {
    bSyncBrushObj(v17[0]);
    if ( a3 )
    {
      if ( a2 < 0x10 )
        goto LABEL_10;
      v13 = v17[0];
      if ( a2 == 32 && *((_DWORD *)v17[0] + 44) == 5 )
      {
        a3[1] = 0LL;
        a3[2] = 0LL;
        *((_DWORD *)a3 + 6) = 0;
        v5 = 32;
        *a3 = 5LL;
        goto LABEL_10;
      }
      *(_DWORD *)a3 = *((_DWORD *)v17[0] + 44);
      *((_DWORD *)a3 + 1) = *((_DWORD *)v13 + 42);
      *((_DWORD *)a3 + 2) = 0;
      *((_DWORD *)a3 + 3) = *((_DWORD *)v13 + 19);
    }
    goto LABEL_9;
  }
  if ( (v7 & 0x400) != 0 )
  {
    if ( (*((_BYTE *)v17[0] + 176) & 0xF) == 7 )
      v11 = *((_DWORD *)v17[0] + 45);
    else
      v11 = 0;
    v12 = 4 * v11 + 28;
    if ( a3 )
    {
      if ( (int)a2 < v12 )
        goto LABEL_10;
      *(_DWORD *)a3 = *((_DWORD *)v17[0] + 44);
      *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 42);
      *((_DWORD *)a3 + 6) = v11;
      if ( v11 )
      {
        v14 = (float *)*((_QWORD *)v6 + 19);
        v15 = (int *)a3 + 7;
        do
        {
          if ( (*((_DWORD *)v6 + 44) & 0xF0000) != 0 )
            bFToL(*v14, v15, 6u);
          else
            *v15 = *(_DWORD *)v14;
          ++v15;
          ++v14;
          --v11;
        }
        while ( v11 );
      }
      *((_DWORD *)a3 + 2) = *((_DWORD *)v6 + 47);
      *((_DWORD *)a3 + 3) = *((_DWORD *)v6 + 19);
      a3[2] = *((_QWORD *)v6 + 20);
    }
    v5 = v12;
    goto LABEL_10;
  }
  if ( !a3 )
    goto LABEL_9;
  if ( a2 >= 0x10 )
  {
    bSyncBrushObj(v17[0]);
    v8 = v17[0];
    v9 = *((_DWORD *)v17[0] + 10);
    if ( (v9 & 0x10) != 0 )
    {
      *(_DWORD *)a3 = 0;
      *((_DWORD *)a3 + 1) = *((_DWORD *)v8 + 19);
LABEL_8:
      a3[1] = 0LL;
LABEL_9:
      v5 = 16;
      goto LABEL_10;
    }
    if ( (v9 & 0x40) != 0 )
    {
      *a3 = 3LL;
    }
    else
    {
      if ( (v9 & 0x20) != 0 )
      {
        *(_DWORD *)a3 = 2;
        *((_DWORD *)a3 + 1) = *((_DWORD *)v8 + 19);
        v16 = *((unsigned int *)v8 + 20);
LABEL_40:
        a3[1] = v16;
        goto LABEL_9;
      }
      if ( (v9 & 0x100) != 0 )
      {
        *a3 = 1LL;
        goto LABEL_8;
      }
      if ( (v9 & 0x80u) == 0 )
        goto LABEL_9;
      *(_DWORD *)a3 = 5;
      *((_DWORD *)a3 + 1) = *((_DWORD *)v8 + 19);
    }
    v16 = *((_QWORD *)v8 + 4);
    goto LABEL_40;
  }
LABEL_10:
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v17);
  return v5;
}
