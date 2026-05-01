/*
 * XREFs of ?GetAreMrtResourcesRedirected@Package_NoThrow@Entity@Cache@StateRepository@@QEBA_NXZ @ 0x18040AEA0
 * Callers:
 *     _lambda_0c37c1600930a15155a5eb9c2ae4abb7_::operator() @ 0x180409B60 (_lambda_0c37c1600930a15155a5eb9c2ae4abb7_--operator().c)
 * Callees:
 *     <none>
 */

char __fastcall StateRepository::Cache::Entity::Package_NoThrow::GetAreMrtResourcesRedirected(
        StateRepository::Cache::Entity::Package_NoThrow *this)
{
  char v2; // bl
  int v4; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 7) & 0x800) != 0 )
    return 1;
  v2 = 0;
  v4 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v4, 0LL);
  if ( v4 == 5 && CompareStringOrdinal(*((LPCWCH *)this + 7), 2, L"C:", 2, 1) != 2 )
    return 1;
  return v2;
}
