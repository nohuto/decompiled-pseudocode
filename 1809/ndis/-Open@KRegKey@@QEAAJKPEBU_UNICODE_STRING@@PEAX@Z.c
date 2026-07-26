/*
 * XREFs of ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C00C744C
 * Callers:
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C00C71E4 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KRegKey::Open(KRegKey *this, ACCESS_MASK a2, struct _UNICODE_STRING *a3, void *a4)
{
  unsigned int v5; // edi
  HANDLE v6; // rsi
  _OBJECT_ATTRIBUTES v8; // [rsp+20h] [rbp-38h] BYREF
  HANDLE v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0LL;
  v8.ObjectName = a3;
  v8.Length = 48;
  v8.RootDirectory = a4;
  *(_OWORD *)&v8.SecurityDescriptor = 0LL;
  v8.Attributes = 576;
  v5 = ZwOpenKey(&v9, a2, &v8);
  v6 = v9;
  if ( this->m_ptr )
    ZwClose(this->m_ptr);
  this->m_ptr = v6;
  return v5;
}
