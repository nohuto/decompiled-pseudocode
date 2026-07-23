/*
 * XREFs of IoCopyDeviceObjectHint @ 0x14081D360
 * Callers:
 *     <none>
 * Callees:
 *     IopGetSetSpecificExtension @ 0x14008CFBC (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoCopyDeviceObjectHint(__int64 a1, __int64 a2)
{
  int v2; // edx
  _QWORD *v3; // r8
  __int64 v4; // r11
  unsigned int v6; // edx
  _QWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // [rsp+28h] [rbp-10h]
  _QWORD *FileObjectExtension; // [rsp+50h] [rbp+18h] BYREF

  FileObjectExtension = (_QWORD *)IopGetFileObjectExtension(a2, 1, 0LL);
  if ( FileObjectExtension )
    return 3221225473LL;
  v7 = (_QWORD *)IopGetFileObjectExtension(v4, v2, v3);
  if ( v7 )
  {
    LOBYTE(v9) = v6;
    LODWORD(v9) = IopGetSetSpecificExtension(v10, v6, 0x20u, v9, &FileObjectExtension, (_QWORD *)(v8 & v11));
    if ( !(_DWORD)v9 )
      *FileObjectExtension = *v7;
  }
  return (unsigned int)v9;
}
