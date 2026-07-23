/*
 * XREFs of MiAttemptPageFileExtension @ 0x140854210
 * Callers:
 *     MiExtendPagingFiles @ 0x1408544F4 (MiExtendPagingFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiFinishPageFileExtension @ 0x1402B8110 (MiFinishPageFileExtension.c)
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 *     IoSetInformation @ 0x140702520 (IoSetInformation.c)
 */

unsigned __int64 __fastcall MiAttemptPageFileExtension(__int64 a1, unsigned __int64 a2)
{
  struct _KEVENT *v4; // rbp
  unsigned __int64 i; // rax
  __int64 v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  struct _FILE_OBJECT *v12; // rcx
  int v14; // [rsp+40h] [rbp-58h] BYREF
  __int64 FileInformation; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v16[2]; // [rsp+50h] [rbp-48h] BYREF
  int v17; // [rsp+60h] [rbp-38h]
  int v18; // [rsp+64h] [rbp-34h]

  v4 = *(struct _KEVENT **)(a1 + 256);
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8)
    && (int)IopQueryXxxInformation(*(struct _FILE_OBJECT **)(a1 + 56), 3, 0x18u, 0, (struct _IRP *)v16, &v14, 0) >= 0 )
  {
    for ( i = 0x4000LL; ; i = 4096LL )
    {
      v6 = *(_QWORD *)a1;
      v7 = i;
      if ( a2 >= i )
      {
        i = a2;
        v7 = 4096LL;
      }
      v8 = *(_QWORD *)(a1 + 8) - v6;
      if ( i <= v8 )
        v8 = i;
      v9 = v16[1] * (unsigned int)(v17 * v18);
      if ( v9 <= 0x10000000 )
        break;
      v10 = (v9 - 0x10000000) >> 12;
      if ( v10 <= v8 )
        v8 = v10;
      if ( (*(_BYTE *)(a1 + 204) & 0x10) != 0 && v8 < a2 )
        break;
      v11 = v8 + v6;
      v12 = *(struct _FILE_OBJECT **)(a1 + 56);
      FileInformation = v11 << 12;
      if ( !IoSetInformation(v12, FileEndOfFileInformation, 8u, &FileInformation) )
      {
        MiFinishPageFileExtension(v4, a1, v8);
        return v8;
      }
      if ( v7 == 4096 )
        return 0LL;
    }
  }
  return 0LL;
}
