/*
 * XREFs of FindOrCreateMaterialProperty @ 0x1C008B638
 * Callers:
 *     NtDCompositionSetMaterialProperty @ 0x1C008B4D0 (NtDCompositionSetMaterialProperty.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C005CD5C (--_GMaterialProperty@@QEAAPEAXI@Z.c)
 *     FindMaterialProperty @ 0x1C008B6F4 (FindMaterialProperty.c)
 */

__int64 __fastcall FindOrCreateMaterialProperty(__int64 a1, __int64 a2, MaterialProperty **a3)
{
  int MaterialProperty; // edi
  MaterialProperty *v7; // rax
  MaterialProperty *v8; // rbx
  __int128 v9; // xmm0
  __int128 Buffer; // [rsp+20h] [rbp-38h] BYREF
  MaterialProperty *v12; // [rsp+30h] [rbp-28h]
  MaterialProperty *v13; // [rsp+78h] [rbp+20h] BYREF

  MaterialProperty = FindMaterialProperty(a1, a2, &v13);
  if ( MaterialProperty != -1073741275 )
  {
    v8 = v13;
LABEL_13:
    if ( MaterialProperty >= 0 )
      goto LABEL_7;
    goto LABEL_14;
  }
  v7 = (MaterialProperty *)Win32AllocPoolZInit(0x18uLL, 0x64777355u);
  v8 = v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = a1;
    *((_QWORD *)v7 + 1) = a2;
    *((_QWORD *)v7 + 2) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !v8 )
  {
    MaterialProperty = -1073741801;
    goto LABEL_13;
  }
  v9 = *(_OWORD *)v8;
  v12 = v8;
  Buffer = v9;
  if ( RtlInsertElementGenericTable(Table, &Buffer, 0x18u, 0LL) )
  {
    MaterialProperty = 0;
LABEL_7:
    *a3 = v8;
    return (unsigned int)MaterialProperty;
  }
  MaterialProperty = -1073741801;
LABEL_14:
  if ( v8 )
    MaterialProperty::`scalar deleting destructor'(v8);
  return (unsigned int)MaterialProperty;
}
