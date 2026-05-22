/*
 * XREFs of ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x1800D6424
 * Callers:
 *     ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1800D6290 (-Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FlickRecognizer::CheckForFlick(FlickRecognizer *this, const struct GestureSession *a2)
{
  char v2; // r9
  int v5; // r10d
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r10d
  int v14; // ebx
  int v15; // r10d
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  unsigned int v19; // r11d
  __int64 v20; // [rsp+0h] [rbp-28h]
  __int64 v21; // [rsp+10h] [rbp-18h]

  v2 = *((_BYTE *)this + 138);
  if ( (v2 & 1) == 0 )
  {
    v5 = *((unsigned __int8 *)this + 136);
    v6 = *((unsigned __int16 *)this + 80);
    v7 = *((unsigned __int8 *)this + 136);
    v8 = 3LL * *((unsigned __int8 *)this + 137);
    while ( *((_DWORD *)this + v8 + 6) - *((_DWORD *)this + 3 * v7 + 6) > v6 )
    {
      v9 = v5 + 1;
      v5 = 0;
      v10 = v7 + 1;
      if ( v7 != 9 )
        v5 = v9;
      v11 = v7;
      v7 = 0LL;
      if ( v11 != 9 )
        v7 = v10;
    }
    v20 = *(_QWORD *)((char *)this + 12 * v5 + 16);
    v12 = *((_DWORD *)this + v8 + 6) - *((_DWORD *)this + 3 * v5 + 6);
    v21 = *(_QWORD *)((char *)this + 4 * v8 + 16);
    v13 = v21 - v20;
    v14 = HIDWORD(v21) - HIDWORD(v20);
    if ( v12 > 0 )
    {
      *((_DWORD *)this + 37) = 1000 * v13 / v12;
      v15 = 1000 * v13 / v12;
      *((_DWORD *)this + 38) = 1000 * v14 / v12;
      v16 = 1000 * v14 / v12;
      if ( (*((_BYTE *)a2 + 198) & 2) != 0 )
        v17 = *((_DWORD *)a2 + 60);
      else
        LOBYTE(v17) = 0;
      v18 = (unsigned __int8)v17 & (unsigned __int8)*((_DWORD *)a2 + 3) & 0x30;
      if ( v18 == 16 )
      {
        *((_DWORD *)this + 38) = 0;
        v16 = 0;
      }
      else if ( v18 == 32 )
      {
        *((_DWORD *)this + 37) = 0;
        v15 = 0;
      }
      if ( (v2 & 2) != 0 )
      {
        v19 = *((unsigned __int16 *)this + 78);
        if ( abs32(v15) >= v19 || abs32(v16) >= v19 )
          *((_BYTE *)this + 138) = v2 | 4;
      }
    }
  }
}
