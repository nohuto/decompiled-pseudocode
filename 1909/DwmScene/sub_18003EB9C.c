/*
 * XREFs of sub_18003EB9C @ 0x18003EB9C
 * Callers:
 *     sub_18003E400 @ 0x18003E400 (sub_18003E400.c)
 * Callees:
 *     _o_powf @ 0x180125B76 (_o_powf.c)
 *     _Init_thread_footer @ 0x180126888 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801268E8 (_Init_thread_header.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

__int64 __fastcall sub_18003EB9C(__int64 a1, _DWORD *a2)
{
  int v4; // ecx
  int v5; // ecx
  float v6; // xmm6_4
  __int64 result; // rax

  memset(a2, 0, 0x28uLL);
  a2[2] = *(unsigned __int8 *)(a1 + 64);
  a2[8] = 1;
  a2[6] = 1;
  a2[9] = 1;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        a2[1] = 1;
    }
    else
    {
      a2[1] = 3;
    }
  }
  else
  {
    a2[1] = 2;
  }
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
      *a2 = 2;
  }
  else
  {
    *a2 = 3;
  }
  v6 = *(float *)(a1 + 12);
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( dword_180269FF8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                     + 44LL) )
    {
      Init_thread_header(&dword_180269FF8);
      if ( dword_180269FF8 == -1 )
      {
        dword_180269FF4 = o_powf();
        Init_thread_footer(&dword_180269FF8);
      }
    }
    v6 = *(float *)&dword_180269FF4 * v6;
  }
  a2[3] = (int)v6;
  a2[5] = *(_DWORD *)(a1 + 20);
  a2[4] = *(_DWORD *)(a1 + 16);
  result = *(unsigned __int8 *)(a1 + 60);
  a2[7] = result;
  return result;
}
