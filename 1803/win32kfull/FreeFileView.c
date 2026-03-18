/*
 * XREFs of FreeFileView @ 0x1C00FFF18
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C0081004 (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C007EE54 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00BF054 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     vUnmapRemoteFonts @ 0x1C025B890 (vUnmapRemoteFonts.c)
 */

__int64 __fastcall FreeFileView(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  struct _FILEVIEW **v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rdi
  __int64 *v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v11, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  if ( UmfdFileviewLookup )
  {
    v7 = v2;
    v8 = (__int64 *)a1;
    v9 = 0LL;
    if ( a1 > a1 + 8 * v2 )
      v7 = 0LL;
    if ( v7 )
    {
      do
      {
        v10 = *v8;
        if ( (*(_DWORD *)(*v8 + 40) & 0x20) != 0 )
        {
          v12 = *(_DWORD *)(v10 + 64);
          NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v10, &v12);
        }
        ++v8;
        ++v9;
      }
      while ( v9 < v7 );
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
  v4 = (struct _FILEVIEW **)a1;
  v5 = 0LL;
  if ( a1 > a1 + 8 * v2 )
    v2 = 0LL;
  if ( v2 )
  {
    do
    {
      if ( *((_QWORD *)*v4 + 11) )
        vUnmapRemoteFonts();
      else
        vUnreferenceFileviewSection(*v4);
      ++v4;
      ++v5;
    }
    while ( v5 < v2 );
  }
  return Win32FreePool(a1);
}
