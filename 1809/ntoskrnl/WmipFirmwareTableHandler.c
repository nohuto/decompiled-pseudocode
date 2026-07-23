/*
 * XREFs of WmipFirmwareTableHandler @ 0x140190B10
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400E5DE0 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall WmipFirmwareTableHandler(_DWORD *a1)
{
  unsigned int v1; // edi
  unsigned int v3; // r10d
  int v4; // eax
  int v5; // r11d
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  unsigned int v10; // esi
  void *v11; // rax
  void *v12; // rbp
  unsigned int v14; // eax
  _DWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax

  v1 = 0;
  v3 = 0;
  if ( !a1 )
    return 3221225711LL;
  v4 = a1[1];
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v5 = a1[2];
      v6 = 2;
      v7 = 0;
      v8 = 0;
      while ( WmipFirmwareTableArray[v7] != v5 )
      {
        ++v8;
        v7 += 2;
        if ( v8 >= 2 )
          goto LABEL_8;
      }
      v3 = WmipFirmwareTableArray[v7 + 1];
      v9 = a1[3];
      a1[3] = v3;
      if ( v9 < v3 )
        return 3221225507LL;
      v6 = v7;
LABEL_8:
      if ( v8 != 2 )
      {
        v10 = v3;
        v11 = (void *)MmMapIoSpaceEx(WmipFirmwareTableArray[v6], v3, 0x204u);
        v12 = v11;
        if ( v11 )
        {
          memmove(a1 + 4, v11, v10);
          MmUnmapIoSpace(v12, v10);
          return 0LL;
        }
        return 3221226021LL;
      }
    }
    return 3221225711LL;
  }
  v14 = a1[3];
  a1[3] = 8;
  if ( v14 >= 8 )
  {
    v15 = a1 + 4;
    v16 = 2LL;
    do
    {
      v17 = v1;
      v1 += 2;
      *v15++ = WmipFirmwareTableArray[v17];
      --v16;
    }
    while ( v16 );
    return 0LL;
  }
  return 3221225507LL;
}
