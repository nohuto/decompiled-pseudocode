/*
 * XREFs of PktMonClientComponentRegisterEx @ 0x1C0026940
 * Callers:
 *     PktMonClientComponentRegister @ 0x1C001A9DC (PktMonClientComponentRegister.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall PktMonClientComponentRegisterEx(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rax
  _QWORD v12[6]; // [rsp+30h] [rbp-48h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( (_QWORD)xmmword_1C009FE48 )
  {
    KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
    if ( (_QWORD)xmmword_1C009FE48 )
    {
      if ( *(_QWORD *)(a1 + 40) )
      {
        v9 = -1073741816;
      }
      else
      {
        *(_DWORD *)(a1 + 32) = 0;
        LODWORD(v12[4]) = a4;
        *(_QWORD *)(a1 + 24) = a1 + 16;
        *(_QWORD *)(a1 + 16) = a1 + 16;
        LOWORD(v12[0]) = 48;
        v12[1] = a1;
        v12[2] = a2;
        v12[3] = a3;
        HIDWORD(v12[4]) = 3;
        LODWORD(v12[5]) = 4;
        if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(*((_QWORD *)&xmmword_1C009FE48 + 1) + 8LL))(
                 xmmword_1C009FE48,
                 v12,
                 a1 + 40);
          if ( !v9 )
          {
            *(_DWORD *)(a1 + 48) = a5;
            v10 = PktMonCompList;
            if ( *(__int64 **)(PktMonCompList + 8) != &PktMonCompList )
              __fastfail(3u);
            ++PktMonCompCount;
            *(_QWORD *)a1 = PktMonCompList;
            *(_QWORD *)(a1 + 8) = &PktMonCompList;
            *(_QWORD *)(v10 + 8) = a1;
            PktMonCompList = a1;
          }
          ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
        }
        else
        {
          v9 = -1073741738;
        }
      }
    }
    else
    {
      v9 = -1073741661;
    }
    KeReleaseMutex(&PktMonCompMutex, 0);
  }
  else
  {
    return (unsigned int)-1073741661;
  }
  return v9;
}
