/*
 * XREFs of IopRetrieveTransactionParameters @ 0x14063A990
 * Callers:
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopGetSetSpecificExtension @ 0x14008CFBC (IopGetSetSpecificExtension.c)
 *     IopCheckStackForTransactionSupport @ 0x140169D40 (IopCheckStackForTransactionSupport.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopRetrieveTransactionParameters(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  int SetSpecificExtension; // edi
  struct _KTHREAD *CurrentThread; // rcx
  _WORD *Teb; // rax
  __int64 v12; // r9
  _WORD *v13; // rcx
  __int16 v14; // [rsp+30h] [rbp-58h]
  int v15; // [rsp+34h] [rbp-54h]
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _WORD *v18; // [rsp+48h] [rbp-40h] BYREF

  Handle = 0LL;
  v14 = 0;
  result = TmCurrentTransaction(&Handle);
  SetSpecificExtension = result;
  v15 = result;
  if ( (_DWORD)result == -1073741637 )
  {
    SetSpecificExtension = 0;
    v15 = 0;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  if ( Handle )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread->ApcStateIndex == 1
      || (Teb = CurrentThread->Teb) == 0LL )
    {
      SetSpecificExtension = -1072103400;
    }
    else
    {
      v14 = Teb[372];
      SetSpecificExtension = v15;
    }
  }
  if ( SetSpecificExtension < 0 || !Handle )
    return (unsigned int)SetSpecificExtension;
  if ( IopCheckStackForTransactionSupport(a1)
    || (*(_WORD *)(a2 + 70) &= 1u, *(_DWORD *)(a2 + 88) == 1) && (a3 & 0xFEEDFF56) == 0
    || *(_BYTE *)(a2 + 137) )
  {
    if ( ObReferenceObjectByHandle(Handle, 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 1, &Object, 0LL) < 0 )
    {
      return (unsigned int)-1072103400;
    }
    else
    {
      LOBYTE(v12) = 1;
      SetSpecificExtension = IopGetSetSpecificExtension(a4, 0, 0x10u, v12, &v18, 0LL);
      if ( SetSpecificExtension >= 0 )
      {
        v13 = v18;
        *v18 = 16;
        v13[1] = v14;
        *((_QWORD *)v13 + 1) = Object;
        return (unsigned int)SetSpecificExtension;
      }
      ObfDereferenceObject(Object);
    }
    return (unsigned int)SetSpecificExtension;
  }
  return 3222863935LL;
}
