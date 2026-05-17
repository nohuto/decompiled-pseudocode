/*
 * XREFs of LdrGetDllHandleByMapping @ 0x18002DD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_18002228C @ 0x18002228C (sub_18002228C.c)
 *     sub_18002DC10 @ 0x18002DC10 (sub_18002DC10.c)
 *     sub_1800D576C @ 0x1800D576C (sub_1800D576C.c)
 */

__int64 __fastcall LdrGetDllHandleByMapping(unsigned __int64 a1, _QWORD *a2)
{
  int v4; // ebx
  volatile signed __int32 *v5; // rdi
  _DWORD *v7; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  volatile signed __int32 *v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = RtlImageNtHeaderEx(1, a1, 0LL, &v7);
  if ( v4 >= 0 )
  {
    v4 = sub_18002DC10(a1, v7, &v9, &v8);
    if ( v4 >= 0 )
    {
      if ( v8 >= 7 )
      {
        v5 = v9;
        v4 = sub_18002228C((__int64)v9);
        if ( v4 >= 0 )
          *a2 = *((_QWORD *)v5 + 6);
      }
      else
      {
        v4 = -1073741515;
        v5 = v9;
      }
      sub_18001B678((__int64)v5);
    }
  }
  return (unsigned int)v4;
}
