/*
 * XREFs of FreeFileView @ 0x1C00CBF00
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C00CBC84 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C008D590 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C0092C1C (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     vUnmapRemoteFonts @ 0x1C026F0C0 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall FreeFileView(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v4; // rbp
  struct _FILEVIEW **v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  char v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v11, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  if ( UmfdFileviewLookup )
  {
    v8 = v2;
    v9 = a1;
    v10 = 0LL;
    if ( a1 > a1 + 8 * v2 )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        v12 = *(_DWORD *)(*(_QWORD *)v9 + 64LL);
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v12, &v12);
        ++v10;
        v9 += 8LL;
      }
      while ( v10 < v8 );
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
  v4 = v2;
  v5 = (struct _FILEVIEW **)a1;
  v6 = 0LL;
  if ( a1 > a1 + 8 * v2 )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      if ( *((_QWORD *)*v5 + 11) )
        vUnmapRemoteFonts();
      else
        vUnreferenceFileviewSection(*v5);
      ++v5;
      ++v6;
    }
    while ( v6 < v4 );
  }
  return Win32FreePool(a1);
}
