/*
 * XREFs of SetStdHandleEx @ 0x14000F8C0
 * Callers:
 *     CloseHandle @ 0x14000F15C (CloseHandle.c)
 * Callees:
 *     BaseSetLastNTError @ 0x14001008C (BaseSetLastNTError.c)
 */

__int64 __fastcall SetStdHandleEx(int a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( a3 )
    *a3 = 0LL;
  switch ( a1 )
  {
    case -12:
      v7 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 32LL);
      v5 = *(_QWORD *)(v7 + 48);
      *(_QWORD *)(v7 + 48) = 0LL;
      break;
    case -11:
      v6 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 32LL);
      v5 = *(_QWORD *)(v6 + 40);
      *(_QWORD *)(v6 + 40) = 0LL;
      break;
    case -10:
      v4 = *(_QWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 32LL);
      v5 = *(_QWORD *)(v4 + 32);
      *(_QWORD *)(v4 + 32) = 0LL;
      break;
    default:
      BaseSetLastNTError(3221225480LL);
      return 0LL;
  }
  if ( a3 )
    *a3 = v5;
  return 1LL;
}
